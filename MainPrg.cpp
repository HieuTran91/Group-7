#include"ComplexNum.h"

int main()
{
	ComplexNum a, b;
	a.Input();
	a.Output();
	b.Input();
	b.Output();
	cout << "\nReal: " << a.GetRealNum() << "\nImaginary: " << a.GetImaginaryNum();
	a.add(b);
	a.sub(b);
	a.mul(b);
	a.div(b);
	return 0;
}