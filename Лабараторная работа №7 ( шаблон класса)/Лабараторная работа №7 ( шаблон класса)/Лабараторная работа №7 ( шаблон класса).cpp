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
	cin >> m >> n;
	Matrix <kamen,int> third(m, n);
	Matrix <kamen, int> forth(m, n);
	Matrix< double, int	> first(m, n);
	Matrix< double, int	> second(m, n);
	kamen a;
	
	//7 ����
	cout << "1- ������ � ��������, 2 - ������ � �������, 3 - ������ ������� \n";
	int vib;
	cin >> vib;
	switch (vib)
	{
		//-------------------------  �������� - �����
	case 1:
	{   
		third.rand_new_obj();
		forth.rand_new_obj();

		system("cls");

		cout << "������� 1\a\n";
		third.cout_new_obj();

		cout << "������� 2\a\a\n";
		forth.cout_new_obj();

		
		//----------------  ���������
		
		if (third -= forth) cout << "\n\n������� ����� �� �������� ������\n\n";
		else cout << "\n\n������� �� ����� �� �������� �������\n\n";
		//------------------�����
		third / forth;
		cout << "����� ������\n";
		third.cout_new_obj();

		//---------------- �������� �� ���������������

		third[third];

		//==================== ���������=======

		third & third;
		cout << "���������\n";
		third.cout_new_obj();
		break;
	}

	case 2:
		//-------------------------  �������� - �����
		first.rand_new();
		second.rand_new();
		system("cls");

		cout << "������� 1\a\n";
		first.cout_new();

		cout << "������� 2\a\a\n";
		second.cout_new();

		{if (first == second) cout << "\n\n������� ����� �� �������� ������\n\n";
		else cout << "\n\n������� �� ����� �� �������� �������\n\n";

		//===============  ����� =================================

		first + second;
		cout << "����� ������\n";
		first.cout_new();

		//==================== ������� ������������� ������=======

		first%first;

		////====================  ��������� ========================
		cout << "��������� �������: 1 - ������, 2 - ������\n";
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