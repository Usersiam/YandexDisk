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
		
		 a[i] =  Abiturient(i);
		 a[i].setMarks();
		a[i].setFamilia_Adress_Number();
		Abiturient *b = new Abiturient(a[i]);
		system("cls");
		

	}
	
	int b,d;
	
	do
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
		d = 0;
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
			int kolvo,max[30],buf;
			cin >> kolvo;
			cout << "n ������������, ������� ����� ������� ����� ������: " << endl;
			
				for (int i = 0; i < n; i++)
				{
					
					max[i] = a[i+1].Good();
					
 				} 
				for (int i = 0; i < n-1 ;i++)
				for (int j = i + 1; j < n; j++)
				{   
					if (max[i]<max[j])
					{
						buf = max[i];
						max[i] = max[j];
						max[j] = buf;
						
					}
				
				}
				
				for (int i = 0; i < kolvo; i++)
				{
					for (int d = 0; d < n+1 ; d++)
					{
						if (a[d].Good() == max[i])
						{
							a[d].VyvodGood();

						}

					}
				}
				
			break;
		case 5:
			d = 10; break;
		}
				
	} while (d != 10);
	return 0;
}