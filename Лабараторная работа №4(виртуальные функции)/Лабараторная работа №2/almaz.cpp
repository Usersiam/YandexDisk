#include "StdAfx.h"
#include "almaz.h"
#include "conio.h"
#include <iostream>
using namespace std;
Almaz::Almaz()
{
	
}
Almaz::Almaz(char *name, char *ves, char *cennoct�) : Drag(name, ves)
{
	strcpy_s(Almaz::cennoct�3, cennoct�);
}

void Almaz::getname()
{
	
	Drag::getname();
	cout << this->cennoct�3;
}




