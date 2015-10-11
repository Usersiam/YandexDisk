#include "StdAfx.h"
#include "kamen.h"
#include "conio.h"
#include <iostream>
using namespace std;

Kamen::Kamen()
{
	
}
Kamen::Kamen(char *name)
{
	strcpy_s(Kamen::name, name);
}
void Kamen::getname()
{
	cout <<name;
}
