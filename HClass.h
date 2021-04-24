#pragma once
#include <string>

extern int oldGlobalVar;
extern int oldGlobalNonReferencedVar;
class IndirectReferencedClass {
public:
	static int nonReferencedStatic;
	void nonReferencedFunction();
	void nonReferencedTemplateFunction(auto p);
};

class OldClass {
public:
	static int referencedClassStatic;
	void referencedClassNonReferencedFunction();
	IndirectReferencedClass* makeIndirectRefencedClass();
};
template <class T> class OldTemplateClass {
public:
	void nonReferencedFunction(T);
};
class OldClassInTemplate {
public:
	void templateReferencedClassNonReferencedFunction();
};

class NonReferencedClass {
public:
	static int nonReferencedStatic;
	void Func();
	void TemplateFunc(auto);
	std::string getString();
};

template<class T>
inline void OldTemplateClass<T>::nonReferencedFunction(T)
{
	return;
}

void IndirectReferencedClass::nonReferencedTemplateFunction(auto)
{
	return;
}

void NonReferencedClass::TemplateFunc(auto)
{
	return;
}

void referencedGlobalFunction();
void nonReferencedGlobalFunction();
void referencedGlobalTemplateFunction(auto) {}
void nonReferencedGlobalTemplateFunction(auto) {}
