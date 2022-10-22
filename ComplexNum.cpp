#include"ComplexNum.h"
void ComplexNum::Input()
{
	cout << "\nInput the real and the imaginary parts of a complex number: ";
	cin >> Real >> Imaginary;
}

void ComplexNum::Output()
{
	if (Real == 0 && Imaginary == 0)
	{
		cout << 0;
	}
	else if (Real == 0)
	{
		cout << Imaginary << "i";
	}
	else if (Imaginary == 0)
	{
		cout << Real;
	}
	else
	{
		cout << Real;
		if (Imaginary == 1)
		{
			cout << " +i";
		}
		else if (Imaginary == -1)
		{
			cout << "i";
		}
		else if (Imaginary > 1)
		{
			cout << " + ";
		}

		cout << Imaginary << "i";
	}
}

float ComplexNum::GetRealNum()
{
	return this->Real;
}

float ComplexNum::GetImaginaryNum()
{
	return this->Imaginary;
}

void ComplexNum::SetRealNum(float x)
{
	this->Real = x;
}

void ComplexNum::SetImaginaryNum(float x)
{
	this->Imaginary = x;
}

void ComplexNum::add(const ComplexNum& x)
{
	ComplexNum temp;
	temp.Real = this->Real + x.Real;
	temp.Imaginary = this->Imaginary + x.Imaginary;
	cout << "\nAddition: (";
	Output();
	cout << ") + (" << x.Real;
	if (x.Imaginary >= 0)
	{
		cout << " + ";
	}
	cout << x.Imaginary << "i) = ";
	temp.Output();
}

void ComplexNum::sub(const ComplexNum& x)
{
	ComplexNum temp;
	temp.Real = this->Real - x.Real;
	temp.Imaginary = this->Imaginary - x.Imaginary;
	cout << "\nSubtraction: (";
	Output();
	cout << ") - (" << x.Real;
	if (x.Imaginary >= 0)
	{
		cout << " + ";
	}
	cout << x.Imaginary << "i) = ";
	temp.Output();

}

void ComplexNum::mul(const ComplexNum& x)
{
	ComplexNum temp;
	temp.Real = this->Real * x.Real - this->Imaginary * x.Imaginary;
	temp.Imaginary = this->Real * x.Imaginary + this->Imaginary * x.Real;
	cout << "\nMultiplication: (";
	Output();
	cout << ") * (" << x.Real;
	if (x.Imaginary >= 0)
	{
		cout << " + ";
	}
	cout << x.Imaginary << "i) = ";
	temp.Output();
}

void ComplexNum::div(const ComplexNum& x)
{
	if (x.Real == 0 && x.Imaginary == 0)

	{
		cout << "\nDivision: Invalid Calculation!";
		exit(404);
	}
	else
	{
		ComplexNum temp;
		temp.Real = (this->Real * x.Real + this->Imaginary * x.Imaginary) / (pow(this->Real, 2) + pow(this->Imaginary, 2));
		temp.Imaginary = (this->Real * x.Imaginary - this->Imaginary * x.Real) / (pow(this->Real, 2) + pow(this->Imaginary, 2));
		cout << "\nDivision: (";
		Output();
		cout << ") / (" << x.Real;
		if (x.Imaginary >= 0)
		{
			cout << " + ";
		}
		cout << x.Imaginary << "i) = ";
		temp.Output();
	}
}
