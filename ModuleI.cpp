

module Module;
import :I;

void Exp::setEnum(En e) {
	switch (e)
	{
	case En::e5:
		setInts(0, 0);
		break;
	case En::e4:
		setInts(1, 1);
		break;
	case En::e3:
		setInts(2, 2);
		break;
	case En::e2:
		setInts(3, 3);
		break;
	case En::e1:
		setInts(4, 4);
		break;
	case En::e0:
		setInts(5, 5);
		break;
	default:
		break;
	}
}

OldClass Exp::getOld()
{
	return OldClass();
}

OldTempClass<int> Exp::getOldTemp()
{
	return OldTempClass<int>();
}
