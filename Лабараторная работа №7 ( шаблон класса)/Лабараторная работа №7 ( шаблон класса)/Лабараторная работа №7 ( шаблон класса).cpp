#include "stdafx.h"
#include<iostream>
#include "�������.h"
#include "time.h"
using namespace std;

int main()
{       //==============     ������   ===================================
	setlocale(LC_CTYPE, "Rus");
	system("color F0");
	srand(time(NULL));
	cout << "������ ������� (max=20)\n";
	int m, n;
	cin >> m;
	cin >> n;

	Matrix <kamen> third(m, n);
	Matrix <kamen> forth(m, n);
	Matrix< /*float*/ /*int*/  /*double*/ char  /*long*/	> first(m, n);
	Matrix< /*float*/ /*int*/  /*double*/  char  /*long*/	> second(m, n);
	kamen a;
	cout << "1- ������ � ��������, 2 - ������ � �������\n";
	int vib;
	cin >> vib;
	switch (vib)
	{
		//-------------------------  �������� - �����
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


		cout << "������� 1\a\n";
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n; j++)
			{
				cout << "|"; third.cout_new_obj(i, j, a); cout << "|";


			}cout << endl;
		}
		cout << "������� 2\a\a\n";
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n; j++)
			{
				cout << "|"; forth.cout_new_obj(i, j, a); cout << "|";


			}cout << endl;
		}
		

		//----------------  ���������
		third -= forth;
		//------------------�����
		third / forth;
		cout << "����� ������\n";
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n; j++)
			{
				cout << "|"; third.cout_new_obj(i, j, a); cout << "|";

			}cout << endl;
		}
		

		//---------------- �������� �� ���������������

		third [third];


		//==================== ���������=======
		
		third = third;
		cout << "���������\n";
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
		//-------------------------  �������� - �����
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
		
		cout << "������� 1\a\n";
		for (int i = 0; i < m; i++)
		{for (int j = 0; j < n; j++)
			{
				 first.cout_new(i, j); 


			}cout << endl;
	}
		cout << "������� 2\a\a\n";
		for (int i = 0; i < m; i++)
		{for (int j = 0; j < n; j++)
			{
				 second.cout_new(i, j); 


			}cout << endl;
	}
	{if (first == second) cout << "\n\n������� ����� �� �������� ������\n\n";
	else cout << "\n\n������� �� ����� �� �������� �������\n\n";


	//===============  ����� =================================

	first + second;
	cout << "����� ������\n";
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			first.cout_new(i, j);


		}cout << endl;
	}

	

	//==================== ������� ������������� ������=======

	first(first);

	////====================  ��������� ========================
	cout << "��������� �������: 1 - ������, 2 - ������\n";
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