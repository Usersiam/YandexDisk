#include "stdafx.h"
#include <iostream>
using namespace std;


class kamen
{
public:
	int cost_kam;
	kamen()
	{
	}
};


template <class T,class T2> 
class Matrix
{
public:
	T n[20][20];
	T2 m[20][20];
	int ch1, ch2;

	Matrix(int z, int n)
	{
		ch1 = z;
		ch2 = n;

	}

	
	void rand_new()
	{
		for (int i = 0; i < ch1; i++)
			for (int j = 0; j < ch2; j++)
			{
				m[i][j] = (rand() % 10 - 5) + 0.3*(i - j);
			}
	}


	void rand_new_obj()
	{
		for (int i = 0; i < ch1; i++)
			for (int j = 0; j < ch2; j++)
			{
				n[i][j].cost_kam = (rand() % 10 - 5) + 0.3*(i - j);
			}
			
	}


	void cout_new()
	{
		for (int i = 0; i < ch1; i++)
		{for (int j = 0; j < ch2; j++)
			{
				cout << "|"; cout << m[i][j] << "|";
			}cout << endl;
		}
	}


	void cout_new_obj()
	{
		for (int i = 0; i < ch1; i++)
		 {for (int j = 0; j < ch2; j++)
			{
				cout << "|"; cout << n[i][j].cost_kam; cout << "|";
			}cout << endl;
		}
		
		
		
					
	}
	friend Matrix operator / (Matrix& a, Matrix& b)
	{
		for (int i = 0; i < a.ch1; i++)
			for (int j = 0; j <a.ch2; j++)
			{
				
				a.n[i][j].cost_kam = a.n[i][j].cost_kam + b.n[i][j].cost_kam;
				
			}
		return a;
	}
	void operator & (Matrix& a)
	{
		int buf = 0;
		for (int i = 0; i < a.ch1; i++)
			for (int j = 0; j < a.ch2; j++)
			{
				a.n[i][j].cost_kam= buf;
				
			}
		
	}
	friend bool operator -= (Matrix &a, Matrix &b)
	{
		int ch = 0;
		cout << endl;
		for (int i = 0; i < a.ch1; i++)
		{	
			cout << a.n[i][0].cost_kam << " " << b.n[i][0].cost_kam << "\n";
			if (a.n[i][0].cost_kam == b.n[i][0].cost_kam)
			{
				
				ch++; cout << " MAtrica 1 = Matrica 2\n";
			}
			if (a.n[i][0].cost_kam > b.n[i][0].cost_kam)
			{
				cout << " MAtrica 1 > Matrica 2\n";

			}
			if (a.n[i][0].cost_kam < b.n[i][0].cost_kam)
			{
				cout << "MAtrica 1 < Matrica 2\n";
			}
		}
		cout << endl;
		if (ch == a.ch2) return true;

		else  return false;
	}
	int operator [] (Matrix& a)
	{
		
		int buf = 0;
		for (int i = 0; i < a.ch1; i++)
			for (int j = 0; j < a.ch2; j++)
			{
				
				if (a.n[i][j].cost_kam <0) buf++;

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
		cout << endl;
		for (int i = 0; i < a.ch1; i++)
		{
			cout << a.m[i][0] << " " << b.m[i][0] << "\n";
			if (a.m[i][0] == b.m[i][0])
			{
				ch++; cout << "MAtrica 1 = Matrica 2\n";
			}
			if (a.m[i][0]>b.m[i][0])
			{
				cout << "MAtrica 1 > Matrica 2\n";

			}
			if (a.m[i][0]<b.m[i][0])
			{
				cout << "MAtrica 1 < Matrica 2\n";
			}
		}
		if (ch == a.ch2) return true;

		else  return false;
	}
	T operator % (Matrix& a)
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
	void operator () (Matrix&  a)
	{
		
		for (int i = 0; i < ch1; i++)
		{
			for (int j = 0; j < ch2; j++)
			{

				a.m[i][j] = a.n[i][j].cost_kam;
			}
		}
	}




	template <class T3>
	void zero(T3 x,Matrix  a)
	{
		a(a);
			
		for (int i = 0; i < ch1; i++)
			for (int j = 0; j < ch2; j++)
			{
				if (m[i][j] == x) m[i][j] = 0;
			}
		for (int i = 0; i < ch1; i++)
		{
			for (int j = 0; j < ch2; j++)
			{
				cout << "|"; cout << m[i][j]; cout << "|";
			}cout << endl;
		}
	}
};



