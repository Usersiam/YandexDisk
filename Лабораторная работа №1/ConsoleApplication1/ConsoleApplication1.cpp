#include "stdafx.h" 
#include "Abiturient.h"
#include <iostream> 
using namespace std;
int _tmain(int argc, _TCHAR* argv[])
{
	
	system("chcp 1251");
	Abiturient a[30];
	int n;
	cout << "������� ���������� ������������ :";
	cin >> n;
	for (int i = 1; i < n+1; i++)
	{
		cout << i << " �������";
		a[i].setID_and_Marks();
		a[i].setFamilia_Adress_Number();
		system("cls");

	}
	int b;
	for (;;)
	{
		cout << "---����---" << endl;
		cout << "1___����� ���� ����������" << endl;
		cout << "2___����� ������ �������" << endl;
		cout << "3___����� ������� ������������" << endl;
		cout << "4___����� ������������, � ������ ������ ���� ��������" << endl;
		cout << "5___�����" << endl;
		cin >> b;
		system("cls");
		cout << endl;
		switch (b)
		{
		case 1:
			for (int i = 1; i < n+1; i++)
			{
				a[i].print();
			}
			
			break;
		case 2:
			for (int i = 1; i < n+1; i++)
			{
				a[i].printBad();
			}
			
			break;
		
		}
	}
	
	return 0;
}