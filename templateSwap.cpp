#include <iostream>
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <fstream>
#include <cstdlib>
#include <ctype.h>
#include <math.h>
#include <cstring>
#include <vector>
#include <array>
#include <ctime>

using namespace std;

template <typename T>
void Swap(T &a, T &b);
template <typename T>
void Swap(T *a, T *b, int n);
void Show(int a[]);
const int Lim = 8;

int main()
{
	int i = 10;
	int j = 20;
	cout << i << endl << j << endl;
	Swap(i,j);
	cout << i << endl << j << endl;
	int d1[Lim] = {0, 7, 0, 4, 1, 7, 7, 6};
	int d2[Lim] = {0, 7, 2, 0, 1, 9, 6, 9};
	Show(d1);
	Show(d2);
	Show(d1);
	Show(d2);
		
	return 0;
}


template <typename T>
void Swap(T &a, T &b)
{
	T temp;
	temp = a;
	a = b;
	b = temp;
}

template <typename T>
void Swap(T a[], T b[], int n)
{
	T temp;
	for(int i = 0; i < n; i++)
	{
		temp = a[i];
		a[i] = b[i];
		b[i] = temp;
	}
}

void Show(int a[])
{
	cout << a[0] << a[1] << "/";
	cout << a[2] << a[3] << "/";
	for(int i = 4; i < Lim; i++)
		cout << a[i];
	cout << endl;

}

