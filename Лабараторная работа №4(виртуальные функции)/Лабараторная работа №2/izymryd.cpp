#include "StdAfx.h"
#include "izymryd.h"
#include "conio.h"
#include <iostream>
using namespace std;
Izymryd::Izymryd()
{
	
}
Izymryd::Izymryd(char *type, char *ves, char *cennoct�) : Drag(type, ves)
{
	strcpy_s(Izymryd::cennoct�2, cennoct�);
}

void Izymryd::getname()
{
	
	Drag::getname();
	cout << cennoct�2;
}




