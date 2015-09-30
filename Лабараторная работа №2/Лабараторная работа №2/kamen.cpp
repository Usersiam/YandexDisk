#include "StdAfx.h"
#include "kamen.h"
#include "conio.h"
#include <iostream>
using namespace std;
Kamen::Kamen(char *name)
{
	this->name = name;
}
void Kamen::set(char *name)
{
	this->name = name;
	
}
void Kamen::show()
{
	cout  <<  name<< endl;
}


