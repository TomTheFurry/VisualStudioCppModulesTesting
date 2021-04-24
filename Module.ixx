module;
#include "HClass.h"

export module Module;
export import :E;
export import :T;
import :I;
import std.core;

export int MyFunc();
export constexpr bool constexprTest = true;
export class ExposedClass {
public:
	int g;
	int getExInts();
	void setInts(auto, auto);
	void setEnum(En);
	OldClass getOldClass();
	OldTemplateClass<int> getPredefinedOldTemplateClass();
	template<class T>
	OldTemplateClass<T> getOldTemplateClass();
	void checkUseTemplateClass(auto);
	BX getBX();
	Ex* _ex;
	std::vector<int> getVect();
	void callOldGlobalFunctionInline(auto);
private:
	void _setX(int, int);
};
void ExposedClass::setInts(auto i, auto j) {
	_setX(i, j);
}

template<class T>
OldTemplateClass<T> ExposedClass::getOldTemplateClass()
{
	oldGlobalVar++;
	return OldTemplateClass<T>();
}
void ExposedClass::callOldGlobalFunctionInline(auto i) {
	referencedGlobalFunction();
	referencedGlobalTemplateFunction(i);
}

void ExposedClass::checkUseTemplateClass(auto) {
	OldClassInTemplate oct{};
}