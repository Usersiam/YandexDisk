#include "StdAfx.h"
#include "kamen.h"
#include "conio.h"
#include <iostream>
using namespace std;

Kamen::Kamen(void)
{

}
void Kamen::setname(char *name)
{
	this->name = name;
}
void Kamen::getname()
{
	cout << this->name;
}
Kamen::~Kamen(void)
{
	
}