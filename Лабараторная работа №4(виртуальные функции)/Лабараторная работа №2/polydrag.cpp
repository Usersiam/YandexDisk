#include "StdAfx.h"
#include "polydrag.h"
#include "conio.h"
#include <iostream>
using namespace std;
Polydrag::Polydrag()
{

}
Polydrag::Polydrag(char *names)
{
	this->name = names;
}
void Polydrag::getname()
{
	Kamen::getname();
	cout << this->name<<endl;
}
Polydrag::~Polydrag()
{
	
}