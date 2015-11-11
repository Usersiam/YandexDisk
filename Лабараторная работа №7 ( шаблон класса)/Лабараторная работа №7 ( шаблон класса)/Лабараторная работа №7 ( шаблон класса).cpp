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
	cin >> m >> n;
	Matrix <kamen,int> third(m, n);
	Matrix <kamen, int> forth(m, n);
	Matrix< double, int	> first(m, n);
	Matrix< double, int	> second(m, n);
	kamen a;
	
	//7 лаба
	cout << "1- работы с обьектом, 2 - работа с числами, 3 - шаблон функции \n";
	int vib;
	cin >> vib;
	switch (vib)
	{
		//-------------------------  параметр - класс
	case 1:
	{   
		third.rand_new_obj();
		forth.rand_new_obj();

		system("cls");

		cout << "Матрица 1\a\n";
		third.cout_new_obj();

		cout << "Матрица 2\a\a\n";
		forth.cout_new_obj();

		
		//----------------  сравнение
		
		if (third -= forth) cout << "\n\nМатрицы равны по нулевому стобцу\n\n";
		else cout << "\n\nМатрицы не равны по нулевому столбцу\n\n";
		//------------------сумма
		third / forth;
		cout << "Сумма матриц\n";
		third.cout_new_obj();

		//---------------- проверка на отрицательность

		third[third];

		//==================== обнуление=======

		third & third;
		cout << "Обнуление\n";
		third.cout_new_obj();
		break;
	}

	case 2:
		//-------------------------  параметр - число
		first.rand_new();
		second.rand_new();
		system("cls");

		cout << "Матрица 1\a\n";
		first.cout_new();

		cout << "Матрица 2\a\a\n";
		second.cout_new();

		{if (first == second) cout << "\n\nМатрицы равны по нулевому стобцу\n\n";
		else cout << "\n\nМатрицы не равны по нулевому столбцу\n\n";

		//===============  сумма =================================

		first + second;
		cout << "Сумма матриц\n";
		first.cout_new();

		//==================== подсчет отрицательных членов=======

		first%first;

		////====================  обнуление ========================
		cout << "Обнуление матрицы: 1 - первая, 2 - вторая\n";
		int vib;
		cin >> vib;
		switch (vib)
		{
		case 1: first - first;
			first.cout_new();
			break;
		case 2: second - second;
			second.cout_new();
			break;
		default: break;
		}
	case 3: 
		/*Matrix <kamen, int> third(m, n);*/
		Matrix < double,int > one_1(m, n);
		//Matrix < int, int	> second_1(m, n);
		one_1.rand_new();
		one_1.cout_new();
		cout << endl;
		one_1.zero(0.3,one_1);
		cout << endl;

		/*second_1.rand_new();
		second_1.cout_new();
		cout << endl;
		second_1.zero(2, second_1);
		cout << endl;*/
		/*third.rand_new_obj();
		
		third.cout_new_obj();
		cout << endl<<endl;
		third.zero((int)2,third);*/
		
		
		}
	}
}