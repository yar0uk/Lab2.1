// Lab2.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// Lab_02.cpp
// < �������� ������� >
// ����������� ������ � 2.1
// ˳��� ��������.
// ������ 18
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double a; // ������� ��������
	double z1; // ��������� ���������� 1-�� ������
	double z2; // ��������� ���������� 2-�� ������
	cout << "a = "; cin >> a;
	z1 = ((a+2)/sqrt(2*a)-(a/(sqrt(2*a)+2))+2/(a-sqrt(2*a)))*((sqrt(a)-sqrt(2))/(a+2));
	z2 = 1/(sqrt(a)+sqrt(2));
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
