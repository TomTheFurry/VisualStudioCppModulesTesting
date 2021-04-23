module ModuleB;
import Module;
BX getDefault() {
	ExposedClass exp{};
	return BX{ exp.getExInts() };
}