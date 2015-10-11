#include "StdAfx.h"
#include "drag.h"
#include "conio.h"
#include <iostream>
using namespace std;
Drag::Drag()
{
	
}
Drag::Drag(char *name, char *ves) : Kamen(name)
{
	strcpy_s(Drag::ves, ves);
	
}

void Drag::getname()
{
	Kamen::getname();
	cout <<ves<<"   ";
}

