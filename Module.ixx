module;
#include "HClass.h"

export module Module;
export import :E;
import :I;
import std.core;

export int MyFunc();
export constexpr bool TRUES = false;
export class Exp {
public:
	int g;
	int getExInts();
	void setInts(auto, auto);
	void setEnum(En);
	OldClass getOld();
	OldTempClass<int> getOldTemp();
	template<class T>
	OldTempClass<T> passOldTemp();
	BX getBX();
	Ex* _ex;
	std::vector<int> getVect();
private:
	void _setX(int, int);
};
void Exp::setInts(auto i, auto j) {
	_setX(i, j);
}

template<class T>
OldTempClass<T> Exp::passOldTemp()
{
	GlobalInt++;
	return OldTempClass<T>();
}
