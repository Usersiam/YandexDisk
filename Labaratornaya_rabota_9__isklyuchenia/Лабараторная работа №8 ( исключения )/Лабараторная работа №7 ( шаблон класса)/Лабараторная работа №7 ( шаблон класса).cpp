#include "stdafx.h"
#include <iostream>
#include <fstream>
#include "�������.h"
#include "time.h"
using namespace std;
class Error
{
public:
	Error(){	}
	Error(int code)
	{   cout << "��������� ������ �" << code << "  ";
		try
		{
			if (code == 1){
				throw 1;
			}
			else if (code == 2){
				throw 2;
			}
			else if (code == 3){
				throw 3;
			}
			else if (code == 4){
				throw 4;
			}
			else if (code == 5){
				throw 5;
			}
		}
		catch (int n)
		{
			if (n == 1){
				cout << " ������ � switch)\n\n";
				cout << " ���������� �����:\n";
			}
			if (n == 2){
				cout << " ������ �������)\n\n";
				cout << " ������ ���� ���������:\n";
			}
			if (n == 3){
				cout << " (������ � ����� ip)\n\n";
				cout << " ���������� ������������ ������ ip\n";
			}
			if (n == 4){
				cout << " (������ c ������� ������ � ����)\n\n";
				cout << " ���������� �����:\n";
			}
			if (n == 5){
				cout << " (������ �������)\n\n";
				
			}
		}
	}
};

class Error_with_switch : public Error     // ���� � ������ �������� �����
{
public:
	Error_with_switch(int code)
	{
		try
		{
			cout << "=================\n�� �������� �� ����� ����������� ������!!!\n(";
			throw Error(1);
		}
		catch (Error){};
	}

};

class Error_with_format : public Error   // ���� ������ �������� ������
{
public:
	Error_with_format(int code)
	{
		try
		{
			cout << "=================\n������ �������� ������, ���������� �������� ������ int !!!\n(";
			throw Error(2);
		}
		catch (Error){};
	}
};

class Error_with_pointer : public Error, Matrix <char, char> //���� ���� �� ���������
{
public:
	Error_with_pointer(int code,Matrix& obj)
	{
		try
		{
			
			cout << "=================\n���� �� �������� �� ����� ip!!!\n\n(";
			throw Error(3);
		}
		catch (Error)
		{
			obj.getip();
		};
	}
};





class Error_with_file : public Error   // ���� ������ ����
{public:
	Error_with_file(int code )
		
	{
		try
		{
			cout << "=================\n���� �� ����� ���� ������!!!\n\n(";
			throw Error(4);
		}
	
		catch (Error)
		{

			cout << " ����������� ��������� ����\n";
		}
	};
};


class Error_with_access : public Error   // ���� ��� ������� � ������
{
public:
	Error_with_access(int code)

	{
		try
		{
			cout << "=================\n�������� � �������!!!\n\n(";
			throw Error(5);

		}
		catch (Error)
		{

		}
	}
};
	int main()
	{       //==============     ������   ===================================
		setlocale(LC_CTYPE, "Rus");
		system("color F0");
		srand(time(NULL));


		ofstream fout("cppstudio.txt");
		fout << "������ � ������� � �++";
		fout.close();



		try
		{

			if (!fout.is_open())

				throw Error_with_file(4);
		}
		catch (Error_with_file)
		{
			cout << "������ �������������� � ��������� ����\n";
			ofstream fout("reserve.txt");
			fout << time(NULL);

		}

		double m, n;
		int vib, f;
		cout << "������ ������� (max=20)\n";

		cin >> m >> n;
		try{

			if ((double)m != (int)m || (double)n != (int)n)
			{
				fout << "2";
				throw Error_with_format(2);
			}
		}
		catch (Error_with_format)
		{
			if (m >= 20 || n >= 20){
				n = 20;
				m = 20;
			}
			m = (int)m;
			n = (int)n;
			cout << m << " " << n << endl;
			cout << "================= \n";
		}


		Matrix <kamen, int> third(m, n);
		Matrix <kamen, int> forth(m, n);
		Matrix< char, char	> first(m, n);
		Matrix< char, char	> second(m, n);
		kamen a;
		first.ip = 1;

		try
		{

			cout << "\nip object:\n" << "first.ip -->" << first.ip << " \nsecond.ip  -->";
			cout << second.ip << "\n";

			if (first.ip == NULL) { fout << "3"; throw Error_with_pointer(3, first); }
			else { fout << "3"; throw Error_with_pointer(3, second); }

		}
		catch (Error_with_pointer)
		{
			if (first.ip == second.ip){ second.ip++; }
			if (second.ip >= 20)
			{
				try
				{
					throw Error_with_access(5);

				}
				catch (Error_with_access)
				{
					cout << "��� �������� � �������";
					
				}
			}
			else cout << "����� ����� ip";

			cout << "\nip object:\n" << "first.ip -->" << first.ip << " \nsecond.ip  -->";
			cout << second.ip << "\n ================= \n";
		}

		do
		{
			cout << "1- ������ � ��������, 2 - ������ � �������, 3 - ������ ������� \n";
			cin >> vib;
			f = 5;
			f++;
			try
			{

				if (vib != 1 && vib != 2 && vib != 3)
				{
					fout << "1";
					throw Error_with_switch(1);
				}
			}
			catch (Error_with_switch)
			{
				f--;
			}

		} while (f != 6);
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
			break;
		case 3:
			system("cls");
			Matrix < double, double > one_1(m, n);
			Matrix <kamen, int> third(m, n);
			Matrix < int, int	> second_1(m, n);
			Matrix < char, char	> forth_1(m, n);

			one_1.cpp(one_1, 0.3);

			second_1.cpp(second_1, 2);

			forth_1.cpp(forth_1, 54);

			third.rand_new_obj();
			third.cout_new_obj();
			third(third);
			cout << endl << endl;
			third.zero((int)2, third);
			third.cout_new();


			}
		}
	}