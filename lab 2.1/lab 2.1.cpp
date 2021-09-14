// Lab_02.cpp
// < Гамаюнов Олександр >
// Лабораторна робота № 2.
// Лінійні програми.
// Варіант 5.2
#include <iostream>
#include <cmath>
using namespace std;


int main()
{
	double a; // вхідний параметр
	double z1; // результат обчислення 1-го виразу
	double z2; // результат обчислення 2-го виразу

	cout << "a =  "; cin >> a;

	z1 = 1- 1./4 * ( sin(a+a) * sin(a+a) ) + cos(a+a);
	z2 = (cos(a) * cos(a)) + (cos(a) * cos(a) * cos(a) * cos(a));

	cout << endl;
	cout << "z1 = " << z1 << endl;
	cout << "z2 = " << z2 << endl;
	cin.get();
	return 0;



}