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
	cout << "����������� ��������� id ����������� : ";
	cout << id <<" "<<endl;
	system("pause");
}
void Abiturient::setMarks()
{
	
	cout<< "id " <<id << " ";

	cout << endl << "������� ����� � ������� XX (��� ����� 100 ������ ������� ���� * :" << endl;
	
	for (int i = 0; i<4; i++)
	{
		
		int mrks, dop = 0;
		cout << i+1 << " ������ = ";
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
	cout << "������� �������: " << endl;
	cin >> familia;
	cout << endl << "������� ���: " << endl;
	cin >> name;
	cout << endl << "������� ��������: " << endl;
	cin >> otchestvo;
	cout << endl << "������� �����: " << endl;
	cin >> adress;
	cout << endl << "������� �����: " << endl;
	cin >> number;
}

Abiturient::~Abiturient(void) { }

void Abiturient::print()
{
	cout << endl<<endl;
	cout << "ID       - " << Abiturient::id << endl;
	cout << "�������  - " << Abiturient::familia << endl;
	cout << "���      - " << Abiturient::name << endl;
	cout << "�������� - " << Abiturient::otchestvo << endl;
	cout << "�����    - " << Abiturient::adress << endl;
	cout << "�������  - " << Abiturient::number << endl;
	cout << "�������  - ";
	for (int i = 0; i<4; i++)
	{	
	cout <<  Abiturient::marks[i]<<"  ";
	}
	cout << endl;
	cout << "����� ������  - ";
	int prov_sum = 0;
	for (int i = 0; i<4; i++)
	{
		prov_sum = Abiturient::marks[i] + prov_sum;
	}
	cout << prov_sum;
	cout << endl;
	cout << "������� ����  - ";
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
		cout << "�������  - " << Abiturient::familia << endl;
		cout << "���      - " << Abiturient::name << endl;
		cout << "�������� - " << Abiturient::otchestvo << endl;
		cout << "�����    - " << Abiturient::adress << endl;
		cout << "�������  - " << Abiturient::number << endl;
		cout << "�������  - ";
		for (int i = 0; i<4; i++)
		{
			cout << Abiturient::marks[i] << "  ";
		}
		cout << endl;
		cout << "����� ������  - ";
		int prov_sum = 0;
		for (int i = 0; i<4; i++)
		{
			prov_sum = Abiturient::marks[i] + prov_sum;
		}
		cout << prov_sum;
		cout << endl;
		cout << "������� ����  - ";
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
			cout << "�������  - " << Abiturient::familia << endl;
			cout << "���      - " << Abiturient::name << endl;
			cout << "�������� - " << Abiturient::otchestvo << endl;
			cout << "�����    - " << Abiturient::adress << endl;
			cout << "�������  - " << Abiturient::number << endl;
			cout << "�������  - ";
			for (int i = 0; i < 4; i++)
			{
				cout << Abiturient::marks[i] << "  ";
			}
			cout << endl;
			cout << "����� ������  - ";
			int prov_sum = 0;
			for (int i = 0; i<4; i++)
			{
				prov_sum = Abiturient::marks[i] + prov_sum;
			}
			cout << prov_sum;
			cout << endl;
			cout << "������� ����  - ";
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
	cout << "�������  - " << Abiturient::familia << endl;
	cout << "���      - " << Abiturient::name << endl;
	cout << "�������� - " << Abiturient::otchestvo << endl;
	cout << "�����    - " << Abiturient::adress << endl;
	cout << "�������  - " << Abiturient::number << endl;
	cout << "�������  - ";
	for (int i = 0; i < 4; i++)
	{
		cout << Abiturient::marks[i] << "  ";
	}
	cout << endl;
	cout << "����� ������  - ";
	int prov_sum = 0;
	for (int i = 0; i<4; i++)
	{
		prov_sum = Abiturient::marks[i] + prov_sum;
	}
	cout << prov_sum;
	cout << endl;
	cout << "������� ����  - " ;
	cout << prov_sum / 4;
	cout << endl;
}