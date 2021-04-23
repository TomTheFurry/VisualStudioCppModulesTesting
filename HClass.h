#pragma once
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

template<class T>
inline void OldTemplateClass<T>::nonReferencedFunction(T)
{
	return;
}

void IndirectReferencedClass::nonReferencedTemplateFunction(auto)
{
	return;
}