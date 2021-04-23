
export module Module:I;
//export import ModuleB;

class Ex;
struct X;
class P;
export int MyFunc();
export struct BX {
	int i;
};
export struct X {
	BX i = { 1 };
	BX j = { 3 };
};
export class P {
public:
	X x;
	int getInt();
};
export class Ex {
public:
	int getInts();
	void setInt(X);
	P p;
private:
	int getP();
};

void Ex::setInt(X i) {
	p.x = i;
}