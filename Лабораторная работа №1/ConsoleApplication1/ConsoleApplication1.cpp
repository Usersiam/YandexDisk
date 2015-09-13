#include "stdafx.h" 
#include "Abiturient.h"
#include <iostream> 
using namespace std;
int _tmain(int argc, _TCHAR* argv[])
{
	
	system("chcp 1251");
	Abiturient a[30];
	int n;
	cout << "введите количество абитуриентов :";
	cin >> n;
	for (int i = 1; i < n+1; i++)
	{
		cout << i << " студент";
		a[i].setID_and_Marks();
		a[i].setFamilia_Adress_Number();
		system("cls");

	}
	int b;
	for (;;)
	{
		cout << "---МЕНЮ---" << endl;
		cout << "1___вывод всей информации" << endl;
		cout << "2___вывод плохих отметок" << endl;
		cout << "3___вывод хороших абитуриентов" << endl;
		cout << "4___вывод абитуриентов, с суммой баллов выше заданной" << endl;
		cout << "5___выход" << endl;
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