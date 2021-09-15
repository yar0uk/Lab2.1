// Lab2.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// Lab_02.cpp
// < Ференчук Ярослав >
// Лабораторна робота № 2.1
// Лінійні програми.
// Варіант 0.9
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double a; // вхідний параметр
	double b; // вхідний параметр
	double z1; // результат обчислення 1-го виразу
	double z2; // результат обчислення 2-го виразу
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	z1 = ((cos(a) - cos(b))*(cos(a) - cos(b))) - ((sin(a) - sin(b))* (sin(a) - sin(b)));
	z2 = -4 * (sin((a - b) / 2)* sin((a - b) / 2)) * cos(a + b);
	cout << endl;
	cout << "z1 = " << z1 << endl;
	cout << "z2 = " << z2 << endl;
	cin.get();
	return 0;
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
