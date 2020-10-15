// Lab_03_2.cpp
// < Качалуп Денис >
// Лабораторна робота № 3.2
// Розгалуження, задане формулою: функція однієї змінної.
// Варіант 11
#include <iostream>
using namespace std;
int main()
{
	double x;
	double a;
	double b;
	double c;
	double F;

	cout << "x= "; cin >> x;
	cout << "a= "; cin >> a;
	cout << "b= "; cin >> b;
	cout << "c= "; cin >> c;

	// 1 спосіб
	 
	if (x < 1 && c != 0)
		F = (a * (x * x)) + (b / c);
	if (x > 1.5 && c == 0)
		F = (x - a) / ((x - c) * (x + c));
	if (!(x < 1 && c != 0) && !(x > 1.5 && c == 0))
		F = (x * x) / (c * c);

	cout << endl;
	cout << "1)F= " << F << endl;

	// 2 cпосіб

	if (x < 1 && c != 0)
		F = (a * (x * x)) + (b / c);

	else 
		if (x > 1.5 && c == 0)
		 F = (x - a) / ((x - c) * (x + c));

		else 
			if (!(x < 1 && c != 0) && !(x > 1.5 && c == 0))
				F = (x - a) / ((x - c) * (x + c));

	cout << "2)F= " << F << endl;

	cin.get();
	return 0;


 
}