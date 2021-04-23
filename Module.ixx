module;
#include "HClass.h"

export module Module;
export import :E;
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
	BX getBX();
	Ex* _ex;
	std::vector<int> getVect();
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
