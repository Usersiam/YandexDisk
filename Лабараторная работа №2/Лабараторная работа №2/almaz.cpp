#include "StdAfx.h"
#include "almaz.h"
#include "conio.h"
#include <iostream>
using namespace std;
Almaz::Almaz(void)
{

}
void Almaz::setcena(char *cennoctü)
{
	this->cennoctü = cennoctü;
}
void Almaz::getcena()
{
	cout << this->cennoctü;
}
Almaz::~Almaz(void)
{
	
}



