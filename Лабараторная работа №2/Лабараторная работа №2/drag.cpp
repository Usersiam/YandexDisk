#include "StdAfx.h"
#include "drag.h"
#include "conio.h"
#include <iostream>
using namespace std;
Drag::Drag(void)
{

}
void Drag::settype(char  *type)
{
	this->type = type;
}
void Drag::gettype()
{
	cout << this->type << endl;
}
void Drag::setVes(char  *ves)
{
	this->ves = ves;
}
void Drag::getVes()
{
	cout <<  this->ves << endl;
}

Drag::~Drag(void)
{
	
}

