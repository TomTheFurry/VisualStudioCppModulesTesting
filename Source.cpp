
import Module;


int main() {

	Exp exp{};
	auto p = exp.getOld();
	p.doStuff();
	auto oc = p.doSomeStuff();
	oc->doOldStuff();
	int xyz = OldClassTwo::ubq;
	auto q = exp.getOldTemp();
	q.doStuff(5);
	auto u = exp.passOldTemp<char>();
	u.doStuff(' ');
	exp.setEnum(En::e2);
	if (TRUES) {
		xyz++;
	}
	return xyz;
}