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
		cout<< "------------------------МЕНЮ--------------------------" << endl;
		cout << "1___вывод всей информации" << endl;
		cout << "2___вывод плохих отметок"  << endl;
		cout << "3___список абитуриентов, у которых сумма баллов выше заданной" << endl;
		cout << "4___n абитуриентов, имеющих самую высокую сумму баллов" << endl;
		cout << "5___выход" << endl;
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
			cout << "Задайте порог:" << endl;
			int porog;
			cin >> porog;
			cout << "список абитуриентов, имеющих неудовлетворительные оценки: " << endl;
			for (int i = 1; i < n+1; i++)
			{
				a[i].printBad(porog);
				cout << endl << "-----------------------------------";
			}
			
			break;
		case 3:
			cout << "Задайте сумму:" << endl;
			int summa;
			cin >> summa;
			cout << "список абитуриентов, у которых сумма баллов выше заданной: " << endl;
			for (int i = 1; i < n + 1; i++)
			{
				a[i].printSum(summa);
				cout << endl << "-----------------------------------";
			}

			break;
		case 4:
			cout << "Задайте количество:" << endl;
			int kolvo,max[30],buf;
			cin >> kolvo;
			cout << "n абитуриентов, имеющих самую высокую сумму баллов: " << endl;
			
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