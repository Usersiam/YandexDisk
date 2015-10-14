#include "stdafx.h"
#include "kamen.h"
#include "polydrag.h"
#include "drag.h"
#include "almaz.h"
#include "rybin.h"
#include "izymryd.h"
#include <iostream>
#include <conio.h>
using namespace std;


int main(void)
{
	setlocale(LC_ALL, "rus");

	
	cout << "   " << endl << endl << "--------------------------------------" << endl;

	system("chcp 1251");
	system("cls");
	
	
	Drag *pp[10];
	
		
	Rybin *newobj0 = new Rybin("рубин        ", 50, 3, 17);
	
	pp[0] = newobj0;
	pp[0]->getname();
	cout << endl;

	Almaz *newobj1 = new Almaz("алмаз        ", 40, 7,13);
	pp[1] = newobj1;
	pp[1]->getname();
	cout << endl;

	Izymryd *newobj2 = new Izymryd("изумруд        ", 30, 5, 9);
	pp[2] = newobj2;
	pp[2]->getname();
	cout << endl;

	int sum_ves = 0, N=0 ;
	
	do
	{
		sum_ves=sum_ves+pp[N]->vess();
		
		N++;
	} while (N != 3);
	cout << "sum_ves : " << sum_ves << endl;
	
	
	return 0;
}









	
