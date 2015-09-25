#include "stdafx.h" 
#include <iostream>
#include "Abiturient.h" 
#include <conio.h>
using namespace std;

Abiturient::Abiturient()
{
	
}
Abiturient::Abiturient( int ID)
{ 
	
	id = ID;
}

Abiturient::Abiturient(const Abiturient &m)
{

	id = m.id;
	cout << "конструктор копировал id абитуриента : ";
	cout << id <<" "<<endl;
	system("pause");
}
void Abiturient::setMarks()
{
	
	cout<< "id " <<id << " ";

	cout << endl << "Введите баллы в формате XX (для ввода 100 баллов введите знак * :" << endl;
	
	for (int i = 0; i<4; i++)
	{
		
		int mrks, dop = 0;
		cout << i+1 << " оценка = ";
			for (int schet = 2; schet>0; schet--)
			{
				mrks = _getch();
				if (mrks == 42) dop = 100, schet = 0, cout << dop;
				else if (mrks >= 48 && mrks <= 57)
				{
					dop = (mrks - 48) * (int)pow(10, schet - 1) + dop, cout << mrks - 48;
				}
				else schet++;
				
				
			}
			cout <<  endl;
			marks[i] = dop;
			}
	cout<< endl;
}

void Abiturient::setFamilia_Adress_Number()
{
	cout << "Введите фамилию: " << endl;
	cin >> familia;
	cout << endl << "Введите имя: " << endl;
	cin >> name;
	cout << endl << "Введите отчество: " << endl;
	cin >> otchestvo;
	cout << endl << "Введите адрес: " << endl;
	cin >> adress;
	cout << endl << "Введите номер: " << endl;
	cin >> number;
}

Abiturient::~Abiturient(void) { }

void Abiturient::print()
{
	cout << endl<<endl;
	cout << "ID       - " << Abiturient::id << endl;
	cout << "Фамилия  - " << Abiturient::familia << endl;
	cout << "Имя      - " << Abiturient::name << endl;
	cout << "Отчество - " << Abiturient::otchestvo << endl;
	cout << "Адрес    - " << Abiturient::adress << endl;
	cout << "Телефон  - " << Abiturient::number << endl;
	cout << "Отметки  - ";
	for (int i = 0; i<4; i++)
	{	
	cout <<  Abiturient::marks[i]<<"  ";
	}
	cout << endl;
	cout << "Сумма баллов  - ";
	int prov_sum = 0;
	for (int i = 0; i<4; i++)
	{
		prov_sum = Abiturient::marks[i] + prov_sum;
	}
	cout << prov_sum;
	cout << endl;
	cout << "Средний балл  - ";
	cout << prov_sum / 4;
	cout << endl;
}
void Abiturient::printBad(int porog)
{
	int flag = 0;
	for (int i = 0; i<4; i++)
	{
		if( Abiturient::marks[i] <= porog) flag++;
	}
	if (flag != 0){
		cout << endl << endl;
		cout << "ID       - " << Abiturient::id << endl;
		cout << "Фамилия  - " << Abiturient::familia << endl;
		cout << "Имя      - " << Abiturient::name << endl;
		cout << "Отчество - " << Abiturient::otchestvo << endl;
		cout << "Адрес    - " << Abiturient::adress << endl;
		cout << "Телефон  - " << Abiturient::number << endl;
		cout << "Отметки  - ";
		for (int i = 0; i<4; i++)
		{
			cout << Abiturient::marks[i] << "  ";
		}
		cout << endl;
		cout << "Сумма баллов  - ";
		int prov_sum = 0;
		for (int i = 0; i<4; i++)
		{
			prov_sum = Abiturient::marks[i] + prov_sum;
		}
		cout << prov_sum;
		cout << endl;
		cout << "Средний балл  - ";
		cout << prov_sum / 4;
		cout << endl;
	}
}
void Abiturient::printSum(int summa)

{
		int prov_sum = 0;
		for (int i = 0; i<4; i++)
		{
			prov_sum=Abiturient::marks[i]+prov_sum;
		}
		if (summa<prov_sum)
		{
			cout << endl << endl;
			cout << "ID       - " << Abiturient::id << endl;
			cout << "Фамилия  - " << Abiturient::familia << endl;
			cout << "Имя      - " << Abiturient::name << endl;
			cout << "Отчество - " << Abiturient::otchestvo << endl;
			cout << "Адрес    - " << Abiturient::adress << endl;
			cout << "Телефон  - " << Abiturient::number << endl;
			cout << "Отметки  - ";
			for (int i = 0; i < 4; i++)
			{
				cout << Abiturient::marks[i] << "  ";
			}
			cout << endl;
			cout << "Сумма баллов  - ";
			int prov_sum = 0;
			for (int i = 0; i<4; i++)
			{
				prov_sum = Abiturient::marks[i] + prov_sum;
			}
			cout << prov_sum;
			cout << endl;
			cout << "Средний балл  - ";
			cout << prov_sum / 4;
			cout << endl;
		}
	
}
int Abiturient::Good()
{
	int prov_sum = 0;
	for (int i = 0; i<4; i++)
	{
		prov_sum = Abiturient::marks[i] + prov_sum;
	}
	
	return prov_sum;

}
void Abiturient::VyvodGood()
{
	cout << endl << endl;
	cout << "ID       - " << Abiturient::id << endl;
	cout << "Фамилия  - " << Abiturient::familia << endl;
	cout << "Имя      - " << Abiturient::name << endl;
	cout << "Отчество - " << Abiturient::otchestvo << endl;
	cout << "Адрес    - " << Abiturient::adress << endl;
	cout << "Телефон  - " << Abiturient::number << endl;
	cout << "Отметки  - ";
	for (int i = 0; i < 4; i++)
	{
		cout << Abiturient::marks[i] << "  ";
	}
	cout << endl;
	cout << "Сумма баллов  - ";
	int prov_sum = 0;
	for (int i = 0; i<4; i++)
	{
		prov_sum = Abiturient::marks[i] + prov_sum;
	}
	cout << prov_sum;
	cout << endl;
	cout << "Средний балл  - " ;
	cout << prov_sum / 4;
	cout << endl;
}