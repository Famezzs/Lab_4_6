// Lab_4_6.cpp
// Козубенко Андрій
// Лабораторна робота № 4.6
// Вкладені цикли.
// Варіант 10
#include <iostream>
#include <cmath>

using std::cout;
using std::endl;

int main()
{
	double P, S;
	int n, k;

	S = 0;
	n = 1;
	while(n <= 10)
	{
		P = 1;
		k = 1;
		while(k <= n)
		{
			P *= sin(k + n);
			k++;
		}
		S += sqrt(1 + cos(n) * cos(n) + P);
		n++;
	}
	cout << P << endl;

	S = 0;
	n = 1;
	do
	{
		P = 1;
		k = 1;
		do
		{
			P *= sin(k + n);
			k++;
		} while (k <= n);
		S += sqrt(1 + cos(n) * cos(n) + P);
		n++;
	} while (n <= 10);
	cout << P << endl;

	S = 0;
	for (n = 1; n <= 10; n++)
	{
		P = 1;
		for (k = 1; k <= 10; k++)
		{
			P *= sin(k + n);
		}
		S += sqrt(1 + cos(n) * cos(n) + P);
	}
	cout << P << endl;

	S = 0;
	for (n = 10; n >= k; n--)
	{
		P = 1;
		for (k = 10; k >= n; k--)
		{
			P *= sin(k + n);
		}
		S += sqrt(1 + cos(n) * cos(n) + P);
	}
	cout << P << endl;
}