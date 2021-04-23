
import Module;


int main() {

	ExposedClass epc{};
	auto oldClass = epc.getOldClass();
	oldClass.referencedClassNonReferencedFunction();
	auto indirectRefencedClassPtr = oldClass.makeIndirectRefencedClass();
	indirectRefencedClassPtr->nonReferencedFunction();
	indirectRefencedClassPtr->nonReferencedTemplateFunction(12);
	int abc = OldClass::referencedClassStatic;
	int xyz = IndirectReferencedClass::nonReferencedStatic;
	auto q = epc.getPredefinedOldTemplateClass();
	q.nonReferencedFunction(5);
	auto u = epc.getOldTemplateClass<char>();
	u.nonReferencedFunction(' ');

	epc.setEnum(En::e2);
	if (constexprTest) {
		xyz++;
	}
	return xyz;
}