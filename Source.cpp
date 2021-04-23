
import Module;


int main() {

	ExposedClass epc{};
	auto oldClass = epc.getOldClass();
	//^^ Should be reachable

	oldClass.referencedClassNonReferencedFunction();
	//^^ Should this be reachable?
	
	auto indirectRefencedClassPtr = oldClass.makeIndirectRefencedClass();
	//^^ This class is somehow still reachable...

	indirectRefencedClassPtr->nonReferencedFunction();
	//^^ A function referenced by a class that is referenced by another class... Somehow still reachable...
	indirectRefencedClassPtr->nonReferencedTemplateFunction(12);
	//^^ Same for templated / inlined function
	
	int abc = OldClass::referencedClassStatic;
	int xyz = IndirectReferencedClass::nonReferencedStatic;
	//^^ Same for static members

	epc.callOldGlobalFunctionInline(123);
	//^^ that template function calls referencedGlobalFunction()

	//referencedGlobalFunction(); --CompileError
	//^^ However you can't directly reach it.
	//^^ Which means that template functions now changes reachabilities.

	//referencedGlobalTemplateFunction(123); --ComplileError
	//^^ Same for templated global functions

	//int ogv = oldGlobalVar; --CompileError
	//^^ no reachability for referenced extern var

	//int ogv = oldGlobalNonReferencedVar; --ComplileError
	//^^ same
	

	epc.checkUseTemplateClass(123);
	//^^ that template function uses OldClassInTemplate internally

	//OldClassInTemplate oct{}; --CompileError
	//^^ Same as functions, you can't directly reach it.
	//^^ Which means... template functions can kinda be out of line now!

	/* Reachablilty for global Module Fragments
	* 
	*  Class referenced by Module Declaration => reachable
	*  Class referenced by other reachable class => reachable
	*  Static variable in reachable class => reachable
	*  Function in reachable class => reachable
	*  Class referenced by Module Template Definition => not reachable from outside
	*  Function referenced by Module Template Definition => not reachable from outside
	*  Other Stuff => Not reachable
	*  
	* 
	*/



	auto q = epc.getPredefinedOldTemplateClass();
	q.nonReferencedFunction(5);
	auto u = epc.getOldTemplateClass<char>();
	u.nonReferencedFunction(' ');


	//auto h = NonReferencedClass{};
	//^^ Not reachable at all.


	epc.setEnum(En::e2);
	if (constexprTest) {
		xyz++;
	}
	return xyz;
}