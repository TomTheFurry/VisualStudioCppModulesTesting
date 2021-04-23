#include "HClass.h"
#include <iostream>

int OldClass::qrs = 5;
int OldClassTwo::ubq = 7;


void OldClass::doStuff()
{
	qrs++;
	std::cout << "Good\n";
}

OldClassTwo* OldClass::doSomeStuff()
{
	return new OldClassTwo();
}

extern int GlobalInt = 5;

void OldClassTwo::doOldStuff()
{
	ubq++;
}
