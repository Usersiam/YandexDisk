#include "StdAfx.h"
#include "rybin.h"
#include "conio.h"
#include <iostream>
using namespace std;

Rybin::Rybin( char *name, char *ves, char *cennoct�1) : Drag(name, ves)
{
	strcpy_s(Rybin::cennoct�1, cennoct�1);
	
}


void Rybin::getname()
{
	
	Drag::getname();
	cout << cennoct�1;

}


