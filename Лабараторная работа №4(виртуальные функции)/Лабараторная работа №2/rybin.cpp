#include "StdAfx.h"
#include "rybin.h"
#include "conio.h"
#include <iostream>
using namespace std;

Rybin::Rybin( char *name, char *ves, char *cennoctü1) : Drag(name, ves)
{
	strcpy_s(Rybin::cennoctü1, cennoctü1);
	
}


void Rybin::getname()
{
	
	Drag::getname();
	cout << cennoctü1;

}


