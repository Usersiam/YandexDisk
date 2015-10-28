/*  18 вариант 
Класс - Матрица. Дополнительно перегрузить следующие операции:
+ - сложение матриц;
— обнуление всех элементов матрицы;
== - сравнение матриц по нулевому столбцу;
int() – количество отрицательных элементов в матрице.*/
#include "stdafx.h"
#include<iostream>
#include "Матрица.h"
#include "time.h"
using namespace std;

void cout_new(Matrix& b, double m, double n)
{
	cout << endl;
	for (int i = 0; i<m; i++)
	{
		{
			for (int j = 0; j < n; j++)
			b.Display(i, j);
		}
		cout << endl ;
	}
}

void rand_new(Matrix& b, double m, double n)
{
	double u;
	for (int i = 0; i<m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			//cin >> u;
			b.Insert(i, j, rand()%10-3/*u*/);
		}
	}
}

int main()
{       //==============     начало   ===================================
	system("color F0");
	    system("chcp 1251");
		srand(time(NULL));
		cout << "Размер матрицы (max=20)\n";
		double m, n;
		cin >>  m;
		cin >>  n;
		Matrix first(m,n);
		Matrix second(m, n);

		//===============  заполнение  ===========================

		rand_new(first, m, n);								
		rand_new(second, m, n);
		system("cls");
		
		//===============  вывод  ================================

		cout << "Матрица 1\a\n";
		cout_new(first, m, n);
		cout << endl ;

		cout << "Матрица 2\a\a\n";
		cout_new(second, m, n);
		cout << endl;


		if (first == second) cout << "\n\nМатрицы равны по нулевому стобцу\n\n";
		else cout << "\n\nМатрицы не равны по нулевому столбцу\n\n";

		//===============  сумма =================================
		
		first + second;
		cout << "Сумма матриц\n";
		cout_new(first, m, n);
		//==================== подсчет отрицательных членов=======
		first(first);
		////====================  обнуление ========================
		//cout << "Обнуление матрицы: 1 - первая, 2 - вторая\n";
		//int vib;
		//cin >> vib;
		//switch (vib)
		//{
		//case 1: first - first, cout_new(first, m, n); break;
		//case 2: second - second, cout_new(second, m, n); break;
		//default: break;
		//}
		//=============== проверка на нулевой столбик =============

		
		
			
}
