// CPP_Tong1denN.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
using namespace std;

int Tong(int n)
{
	if (n == 0)
		return 0;
	else
		return n + Tong(n - 1);
}

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "Tong 1 den " << n << " la: " << Tong(n);

}
