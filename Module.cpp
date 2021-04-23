module Module;
import :I;

int P::getInt() {
	return x.i.i + x.j.i;
}

int Ex::getInts() {
	return p.getInt();
}

int MyFunc() {
	P p{};
	return p.getInt();
}
int Ex::getP() { return 1; }

int Exp::getExInts() {
	if (!_ex) _ex = new Ex{};
	return _ex->getInts();
}
BX Exp::getBX()
{
	return BX{getExInts()};
}

std::vector<int> Exp::getVect()
{
	return std::vector<int>();
}

void Exp::_setX(int i, int j)
{
	if (!_ex) _ex = new Ex{};
	_ex->setInt(X{ BX{i},BX{j} });
}

