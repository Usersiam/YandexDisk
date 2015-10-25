#include "stdafx.h"
#include <iostream>
using namespace std; 
class Matrix
{
public:
	double m[20][20];
	double ch1 = 0, ch2 = 0;

	Matrix(double m, double n)
	{
		ch1 = m;
		ch2 = n;
	}




	void Insert(int a, int b, double cost)
	{
		int i = a;
		int j = b;
		m[i][j] = cost;
	}

	void Display(int a, int b)
	{
		int i = a;
		int j = b;
		cout << m[i][j] << "  ";
	}





	friend Matrix operator + (Matrix& a, Matrix& b)
	{
		double buf;
		for (int i = 0; i < a.ch1; i++)
		for (int j = 0; j < a.ch2; j++)
		{
			buf = a.m[i][j] + b.m[i][j];
			a.m[i][j] = buf;
		}
		return a;
	}

	double operator - (Matrix& a)
	{
		double buf = 0;
		for (int i = 0; i < a.ch1; i++)
		for (int j = 0; j < a.ch2; j++)
		{

			a.m[i][j] = buf;
		}
		return buf;
	}
	friend bool operator == (Matrix &a, Matrix &b)
	{
		double buf = 0, ch=0;
		for (int j = 0; j < a.ch2/*0*/; j++)
		for (int i = 0; i < a.ch1; i++)
		{
			if (a.m[i][j/*0*/]==b.m[i][j/*0*/] && /*убрать*/a.m[i][j]==0)	
			{
				ch++;
			}

			
						
		}
		if (ch == a.ch2) return true;
		else return false;
	}
	
	int operator() (Matrix& a) 
	{
		int buf=0;
		for (int i = 0; i < ch1; i++)
		for (int j = 0; j < ch2; j++)
		{
			if (a.m[i][j]<0) buf++;
			
		}
		cout << "Количество отрицательных элементов в матрице:\n"<<buf<<"\n";
		return buf;
	}
	
	

};


	