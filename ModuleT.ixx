module;
#include "HClass.h"
#include "IncludeStd.h"

export module Module:T;
import std.core;
export void _iTemplate(auto);
void _iTemplate(auto t) {
	NonReferencedClass nc{};
	nc.getString();
	std::vector<int> p{};
	std::cout << t << "IndirectTemplated\n";
	return;
}