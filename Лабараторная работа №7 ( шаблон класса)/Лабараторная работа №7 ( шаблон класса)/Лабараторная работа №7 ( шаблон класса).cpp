#include "stdafx.h"
#include<iostream>
#include "Матрица.h"
#include "time.h"
using namespace std;

int main()
{       //==============     начало   ===================================
	setlocale(LC_CTYPE, "Rus");
	system("color F0");
	srand(time(NULL));
	cout << "Размер матрицы (max=20)\n";
	int m, n;
	cin >> m;
	cin >> n;

	Matrix <kamen> third(m, n);
	Matrix <kamen> forth(m, n);
	Matrix< /*float*/ /*int*/  /*double*/ char  /*long*/	> first(m, n);
	Matrix< /*float*/ /*int*/  /*double*/  char  /*long*/	> second(m, n);
	kamen a;
	cout << "1- работы с обьектом, 2 - работа с числами\n";
	int vib;
	cin >> vib;
	switch (vib)
	{
		//-------------------------  параметр - класс
	case 1:
	{
		for (int i = 0; i < m; i++)
			for (int j = 0; j < n; j++)
			{
				a.cost_kam = rand() % 100-50;
				third.rand_new_obj(i, j, a);

			}
		for (int i = 0; i < m; i++)
			for (int j = 0; j < n; j++)
			{
				a.cost_kam = rand() % 100-50;
				forth.rand_new_obj(i, j, a);
			}

		system("cls");


		cout << "Матрица 1\a\n";
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n; j++)
			{
				cout << "|"; third.cout_new_obj(i, j, a); cout << "|";


			}cout << endl;
		}
		cout << "Матрица 2\a\a\n";
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n; j++)
			{
				cout << "|"; forth.cout_new_obj(i, j, a); cout << "|";


			}cout << endl;
		}
		

		//----------------  сравнение
		third -= forth;
		//------------------сумма
		third / forth;
		cout << "Сумма матриц\n";
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n; j++)
			{
				cout << "|"; third.cout_new_obj(i, j, a); cout << "|";

			}cout << endl;
		}
		

		//---------------- проверка на отрицательность

		third [third];


		//==================== обнуление=======
		
		third = third;
		cout << "Обнуление\n";
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n; j++)
			{
				cout << "|"; third.cout_new_obj(i, j, a); cout << "|";

			}cout << endl;
		}
		
		break;
	}
	
	case 2:
		//-------------------------  параметр - число
		for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			{
				first.rand_new(i, j); 
			}
		for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			{
				 second.rand_new(i, j); 
			}
		
		cout << "Матрица 1\a\n";
		for (int i = 0; i < m; i++)
		{for (int j = 0; j < n; j++)
			{
				 first.cout_new(i, j); 


			}cout << endl;
	}
		cout << "Матрица 2\a\a\n";
		for (int i = 0; i < m; i++)
		{for (int j = 0; j < n; j++)
			{
				 second.cout_new(i, j); 


			}cout << endl;
	}
	{if (first == second) cout << "\n\nМатрицы равны по нулевому стобцу\n\n";
	else cout << "\n\nМатрицы не равны по нулевому столбцу\n\n";


	//===============  сумма =================================

	first + second;
	cout << "Сумма матриц\n";
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			first.cout_new(i, j);


		}cout << endl;
	}

	

	//==================== подсчет отрицательных членов=======

	first(first);

	////====================  обнуление ========================
	cout << "Обнуление матрицы: 1 - первая, 2 - вторая\n";
	int vib;
	cin >> vib;
	switch (vib)
	{
	case 1: first - first;
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n; j++)
			{
				 first.cout_new(i, j); 


			}cout << endl;
		}
		break;
	case 2: second - second;
		for (int i = 0; i < m; i++)
		{for (int j = 0; j < n; j++)
			{
				 second.cout_new(i, j);


			}cout << endl;
	}
		break;
	default: break;
	}

	}

	}

}