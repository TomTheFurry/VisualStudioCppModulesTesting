#include "HClass.h"
#include <iostream>

int OldClass::referencedClassStatic = 5;
int IndirectReferencedClass::nonReferencedStatic = 7;


void OldClass::referencedClassNonReferencedFunction()
{
	referencedClassStatic++;
	std::cout << "Good\n";
}

IndirectReferencedClass* OldClass::makeIndirectRefencedClass()
{
	return new IndirectReferencedClass();
}

extern int oldGlobalVar = 5;
extern int oldGlobalNonReferencedVar = 6;

void IndirectReferencedClass::nonReferencedFunction()
{
	nonReferencedStatic++;
}
