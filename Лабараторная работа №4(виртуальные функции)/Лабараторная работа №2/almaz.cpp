#include "StdAfx.h"
#include "almaz.h"
#include "conio.h"
#include <iostream>
using namespace std;
Almaz::Almaz()
{
	
}
Almaz::Almaz(char *name, char *ves, char *cennoctü) : Drag(name, ves)
{
	strcpy_s(Almaz::cennoctü3, cennoctü);
}

void Almaz::getname()
{
	
	Drag::getname();
	cout << this->cennoctü3;
}




