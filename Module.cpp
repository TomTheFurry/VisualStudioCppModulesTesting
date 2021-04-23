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

int ExposedClass::getExInts() {
	if (!_ex) _ex = new Ex{};
	return _ex->getInts();
}
BX ExposedClass::getBX()
{
	return BX{getExInts()};
}

std::vector<int> ExposedClass::getVect()
{
	return std::vector<int>();
}

void ExposedClass::_setX(int i, int j)
{
	if (!_ex) _ex = new Ex{};
	_ex->setInt(X{ BX{i},BX{j} });
}

