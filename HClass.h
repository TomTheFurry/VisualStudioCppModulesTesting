#pragma once
extern int GlobalInt;
class OldClassTwo {
public:
	static int ubq;
	void doOldStuff();
};

class OldClass {
public:
	static int qrs;
	void doStuff();
	OldClassTwo* doSomeStuff();
};
template <class T> class OldTempClass {
public:
	void doStuff(T);
};

template<class T>
inline void OldTempClass<T>::doStuff(T)
{
	return;
}
