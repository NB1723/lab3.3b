#include "Complex.h"

Complex::Complex()
	: Pair()
{}

Complex::Complex(int x, int y)
	: Pair(x, y)
{}

Complex::Complex(const Complex& v)
	: Pair(v)
{}

Complex& Complex::operator --()
{
	this->SetRe(this->GetRe() - 1);
	return *this;
}

Complex& Complex::operator ++()
{
	this->SetRe(this->GetRe() + 1);
	return *this;
}

Complex Complex::operator --(int)
{
	Complex a(*this);
	this->SetIm(this->GetIm() - 1);
	return a;
}

Complex Complex::operator ++(int)
{
	Complex a(*this);
	this->SetIm(this->GetIm() + 1);
	return a;
}

Complex operator + (const Complex Z1, const Complex Z2)
{
	Complex tmp(0, 0);
	tmp.SetRe(Z1.GetRe() + Z2.GetRe());
	tmp.SetIm(Z1.GetIm() + Z2.GetIm());
	return tmp;
}

Complex operator * (const Complex Z1, const Complex Z2)
{
	Complex tmp(0, 0);
	tmp.SetRe(Z1.GetRe() * Z2.GetRe() - Z1.GetIm() * Z2.GetIm());
	tmp.SetIm(Z1.GetRe() * Z2.GetIm() + Z2.GetRe() * Z1.GetIm());
	return tmp;
}

bool operator == (const Complex Z1, const Complex Z2)
{
	return Z1.GetRe() == Z2.GetRe() && Z1.GetIm() == Z2.GetIm();
}