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
	system("cls");
	for (int i = 1; i < n+1; i++)
	{
		a[i].setID_and_Marks(i);
		a[i].setFamilia_Adress_Number();
		system("cls");

	}

	int b;
	
	for (;;)
	{
		cout << endl<<endl;
		cout<< "------------------------����--------------------------" << endl;
		cout << "1___����� ���� ����������" << endl;
		cout << "2___����� ������ �������"  << endl;
		cout << "3___������ ������������, � ������� ����� ������ ���� ��������" << endl;
		cout << "4___n ������������, ������� ����� ������� ����� ������" << endl;
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
				cout << endl << "-----------------------------------";
			}
			
			break;
		case 2:
			cout << "������� �����:" << endl;
			int porog;
			cin >> porog;
			cout << "������ ������������, ������� �������������������� ������: " << endl;
			for (int i = 1; i < n+1; i++)
			{
				a[i].printBad(porog);
				cout << endl << "-----------------------------------";
			}
			
			break;
		case 3:
			cout << "������� �����:" << endl;
			int summa;
			cin >> summa;
			cout << "������ ������������, � ������� ����� ������ ���� ��������: " << endl;
			for (int i = 1; i < n + 1; i++)
			{
				a[i].printSum(summa);
				cout << endl << "-----------------------------------";
			}

			break;
		case 4:
			cout << "������� ����������:" << endl;
			int kolvo,b,max[30];
			cin >> kolvo;
			cout << "n ������������, ������� ����� ������� ����� ������: " << endl;
			
				for (int i = 0; i < n; i++)
				{
					max[i] = 0;

					b = a[i].printGood(kolvo);
					if (i = 1) max[i - 1] = 0;
					if (b>max[i] && b<max[i-1]) max[i]=b;
							
			} 
				for (int i = 1; i < kolvo+1; i++)
				{
					cout << max[i] << " ";
				}
				
			break;
		case 5:
			break;
		}
	}
	
	return 0;
}