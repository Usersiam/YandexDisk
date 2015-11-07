#include "stdafx.h"
#include <iostream>
using namespace std;
class kamen
{
public:
	int cost_kam;
	kamen(){
	}
};
template <class T> 
class Matrix
{
public:
	T m[20][20];
	int ch1, ch2;

	Matrix(int m, int n)
	{
		ch1 = m;
		ch2 = n;

	}
	
	void rand_new(int i, int  j)
	{

		m[i][j] = (rand() % 10 - 5) + 0.3*(i-j);


	}
	void rand_new_obj(int i, int  j, kamen& obj)
	{


		m[i][j] = obj;

	}
	void cout_new(int i, int  j)
	{
		cout << m[i][j] << "  ";
				
			
	}

	void cout_new_obj(int i, int  j, kamen obj)
	{
		
		
			obj = m[i][j];
			if (obj.cost_kam >= -200)
			{
				cout << obj.cost_kam;
				
			}
		
		
					
	}
	friend Matrix operator / (Matrix& a, Matrix& b)
	{
		kamen a1, b1, buf;

		for (int i = 0; i < a.ch1; i++)
			for (int j = 0; j <a.ch2; j++)
			{
				a1 = a.m[i][j];
				b1 = b.m[i][j];
				buf.cost_kam = a1.cost_kam + b1.cost_kam;
				a.m[i][j] = buf;
			}
		return a;
	}
	int operator = (Matrix& a)
	{
		int buf = 0;
		kamen a1;
		for (int i = 0; i < a.ch1; i++)
			for (int j = 0; j < a.ch2; j++)
			{
				a1 = a.m[i][j];

				a1.cost_kam = buf;
				a.m[i][j] = a1;
			}
		return buf;
	}
	friend bool operator -= (Matrix &a, Matrix &b)
	{
		int ch = 0;
		kamen a1, b1;

		for (int i = 0; i < a.ch1; i++)
		{
			a1 = a.m[i][0];
			b1 = b.m[i][0];
			cout << a1.cost_kam << " " << b1.cost_kam << "\n";
			if (a1.cost_kam == b1.cost_kam)
			{
				
				ch++; cout << "\n MAtrica 1 = Matrica 2\n";
			}
			if (a1.cost_kam > b1.cost_kam)
			{
				cout << "\n MAtrica 1 > Matrica 2\n";

			}
			if (a1.cost_kam < b1.cost_kam)
			{
				cout << "\n MAtrica 1 < Matrica 2\n";
			}
		}
		if (ch == a.ch2) return true;

		else  return false;
	}
	int operator [] (Matrix& a)
	{
		kamen a1;
		int buf = 0;
		for (int i = 0; i < a.ch1; i++)
			for (int j = 0; j < a.ch2; j++)
			{
				a1 = a.m[i][j];
				if (a1.cost_kam<0) buf++;

			}
		cout << "Количество отрицательных элементов в матрице:\n" << buf << "\n";
		return buf;
	}




	friend Matrix operator + (Matrix& a, Matrix& b)
	{
		T buf;
		
		for (int i = 0; i < a.ch1; i++)
			for (int j = 0; j < a.ch2; j++)
			{
				buf = a.m[i][j] + b.m[i][j];
				a.m[i][j] = buf;
			}
		return a;
	}
	int operator - (Matrix& a)
	{
		T buf = 0;
		for (int i = 0; i < a.ch1; i++)
			for (int j = 0; j < a.ch2; j++)
			{

				a.m[i][j] = buf;
			}
		return buf;
	}
	
	friend bool operator == (Matrix &a, Matrix &b)
	{
		T buf = 0, ch = 0;

		for (int i = 0; i < a.ch1; i++)
		{
			if (a.m[i][0] == b.m[i][0])
			{
				ch++; cout << "\n MAtrica 1 = Matrica 2\n";
			}
			if (a.m[i][0]>b.m[i][0])
			{
				cout << "\n MAtrica 1 > Matrica 2\n";

			}
			if (a.m[i][0]<b.m[i][0])
			{
				cout << "\n MAtrica 1 < Matrica 2\n";
			}
		}
		if (ch == a.ch2) return true;

		else  return false;
	}
	T operator() (Matrix& a)
	{
		T buf = 0;
		for (int i = 0; i < a.ch1; i++)
			for (int j = 0; j < a.ch2; j++)
			{
				if (a.m[i][j]<0) buf++;

			}
		cout << "Количество отрицательных элементов в матрице:\n" << buf << "\n";
		return buf;
	}
};


