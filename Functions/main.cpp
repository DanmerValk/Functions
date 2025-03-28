#include<iostream>
using namespace std;
int Summa(int a = 0, int b = 0, int c = 0);
int Difference(int a, int b);
int Product(int a, int b);
double Quotient(int a, int b);

void main()
{
	setlocale(LC_ALL, "ru");
	cout << "Hello functions\n" << endl;
	int a = 2;
	int b = 3;
	int c = Summa(a, b, 11);
	cout << a << " + " << b << " = " << Summa(a, b) << endl;
	cout << a << " - " << b << " = " << Difference(a, b) << endl;
	cout << a << " * " << b << " = " << Product(a, b) << endl;
	cout << a << " / " << b << " = " << Quotient(a, b) << endl;
	cout << 5 << " + " << 6 << " = " << Summa(5, 6) << endl;
}
int Summa(int a, int b, int c)
{
	int res = a + b + c;
	return res;
}
int Difference(int a, int b)
{
	return a - b;
}
int Product(int a, int b)
{
	return a * b;
}
double Quotient(int a, int b)
{
	return (double) a / b;
}