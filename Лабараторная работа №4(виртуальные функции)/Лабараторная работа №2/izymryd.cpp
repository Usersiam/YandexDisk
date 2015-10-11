#include "StdAfx.h"
#include "izymryd.h"
#include "conio.h"
#include <iostream>
using namespace std;
Izymryd::Izymryd()
{
	
}
Izymryd::Izymryd(char *type, char *ves, char *cennoctü) : Drag(type, ves)
{
	strcpy_s(Izymryd::cennoctü2, cennoctü);
}

void Izymryd::getname()
{
	
	Drag::getname();
	cout << cennoctü2;
}




