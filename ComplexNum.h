#pragma once
#include<iostream>
using namespace std;

class ComplexNum
{
private:
	float Real;
	float Imaginary;
public:
	void Input();
	void Output();

	float GetRealNum();
	float GetImaginaryNum();

	void SetRealNum(float);
	void SetImaginaryNum(float);

	void add(const ComplexNum& x);
	void sub(const ComplexNum& x);
	void mul(const ComplexNum& x);
	void div(const ComplexNum& x);
};