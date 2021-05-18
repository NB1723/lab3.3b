#pragma once
#include "Pair.h"

class Complex : public Pair
{
public:
	Complex();
	Complex(int x, int y);
	Complex(const Complex& v);

	Complex& operator --();
	Complex& operator ++();
	Complex operator --(int);
	Complex operator ++(int);

	friend  Complex operator + (const Complex Z1, const Complex Z2);
	friend  Complex operator * (const Complex Z1, const Complex Z2);
	friend  bool operator == (const Complex Z1, const Complex Z2);
};