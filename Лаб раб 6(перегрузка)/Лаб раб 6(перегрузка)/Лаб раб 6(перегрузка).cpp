/*  18 ������� 
����� - �������. ������������� ����������� ��������� ��������:
+ - �������� ������;
� ��������� ���� ��������� �������;
== - ��������� ������ �� �������� �������;
int() � ���������� ������������� ��������� � �������.*/
#include "stdafx.h"
#include<iostream>
#include "�������.h"
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
{       //==============     ������   ===================================
	system("color F0");
	    system("chcp 1251");
		srand(time(NULL));
		cout << "������ ������� (max=20)\n";
		double m, n;
		cin >>  m;
		cin >>  n;
		Matrix first(m,n);
		Matrix second(m, n);

		//===============  ����������  ===========================

		rand_new(first, m, n);								
		rand_new(second, m, n);
		system("cls");
		
		//===============  �����  ================================

		cout << "������� 1\a\n";
		cout_new(first, m, n);
		cout << endl ;

		cout << "������� 2\a\a\n";
		cout_new(second, m, n);
		cout << endl;


		if (first == second) cout << "\n\n������� ����� �� �������� ������\n\n";
		else cout << "\n\n������� �� ����� �� �������� �������\n\n";

		//===============  ����� =================================
		
		first + second;
		cout << "����� ������\n";
		cout_new(first, m, n);
		//==================== ������� ������������� ������=======
		first(first);
		////====================  ��������� ========================
		//cout << "��������� �������: 1 - ������, 2 - ������\n";
		//int vib;
		//cin >> vib;
		//switch (vib)
		//{
		//case 1: first - first, cout_new(first, m, n); break;
		//case 2: second - second, cout_new(second, m, n); break;
		//default: break;
		//}
		//=============== �������� �� ������� ������� =============

		
		
			
}
