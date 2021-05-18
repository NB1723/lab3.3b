#include "Complex.h"

Complex makeComplex(Complex c)
{
	return c;
}

int main()
{
	cout << "Initialization of public N" << endl;
	Complex N(4, 1), M;
	cout << "N:" << endl;
	cout << N << endl;

	cout << "Initialization of public M" << endl;
	cin >> M;
	cout << "M:" << endl;
	cout << M << endl;

	cout << "Size of public class: " << sizeof(N) << endl << endl;

	cout << "Sum of complex numbers" << endl;
	Complex C = N + M;
	cout << "C:" << endl;
	cout << C << endl;

	cout << "Product of complex numbers" << endl;
	Complex D = N * M;
	cout << "D:" << endl;
	cout << D << endl;

	cout << "Comparison of complex numbers" << endl;
	if (N == M)
		cout << "Complex numbers are equal" << endl << endl;
	else
		cout << "Complex numbers are not equal" << endl << endl;

	cout << "Initialization with returning of object" << endl;
	Complex L = makeComplex(D);
	cout << L << endl;

	cout << "++M: " << endl;
	cout << ++M << endl;
	cout << "--M: " << endl;
	cout << --M << endl;
	cout << "M++: " << endl;
	cout << M++ << endl;
	cout << "M--: " << endl;
	cout << M-- << endl;

	cout << "Initialization of A" << endl;
	Pair A(3, 5), B;
	cout << "A:" << endl;
	cout << A << endl;

	cout << "Initialization of B" << endl;
	cin >> B;
	cout << "B:" << endl;
	cout << B << endl;

	cout << "Comparison of Pairs" << endl;
	if (A == B)
		cout << "Pairs are equal" << endl;
	else
		cout << "Pairs are not equal" << endl;

	if (A != B)
		cout << "Pairs are not equal" << endl;
	else
		cout << "Pairs are equal" << endl;

	if (A > B)
		cout << "Pair A is bigger than Pair B" << endl;
	else
		cout << "Pair A is smaller than Pair B" << endl;

	if (A < B)
		cout << "Pair A is smaller than Pair B" << endl;
	else
		cout << "Pair A is bigger than Pair B" << endl;

	if (A >= B)
		cout << "Pair A is bigger than/equal to Pair B" << endl;
	else
		cout << "Pair A is smaller than/equal to Pair B" << endl;

	if (A <= B)
		cout << "Pair A is smaller than/equal to Pair B" << endl;
	else
		cout << "Pair A is bigger than/equal to Pair B" << endl;
}