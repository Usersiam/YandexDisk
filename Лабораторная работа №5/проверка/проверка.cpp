#include "stdafx.h"
#include <iostream>
#include"Drag.h"
#include"Rubin.h"
#include"Almaz.h"
#include"Izymryd.h"
#include"Control class.h"
#include"kamen.h"
//#include"necklace.h"

using namespace std;
Necklace ojerele;  //объект контроллера 

int main()
{
	
	
	setlocale(LC_CTYPE, "Russian");
	Rubin *First = new Rubin("рубин",30,20,25);
	
	ojerele.insert(First);
	
	Almaz *Second = new Almaz("алмаз", 10, 30, 61);
	
	ojerele.insert(Second);
	
	
	Izymryd *Third = new Izymryd("изумруд", 20, 15, 487);
	
	ojerele.insert(Third);

	cout<<"\nОбщий вес\n"<<ojerele.weight()<<"\n";
	cout << "\nОбщая стоимость\n" << ojerele.cost() << "\n";
	cout << "\n Отсортированный массив\n" << ojerele.sort() << "\n";
	ojerele.prozr();
	ojerele.deleteDRAG();
	return 0;
}