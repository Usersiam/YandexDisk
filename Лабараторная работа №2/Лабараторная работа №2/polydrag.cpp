#include "StdAfx.h"
#include "polydrag.h"
#include "conio.h"
#include <iostream>
using namespace std;
Polydrag::Polydrag(void)
{

}
void Polydrag::setPolydrag(char *x)
{
	this->stependia = x;
}
void Polydrag::getPolydrag()
{
	cout << ": " << this->stependia << endl;
}
Polydrag::~Polydrag(void)
{
	
}