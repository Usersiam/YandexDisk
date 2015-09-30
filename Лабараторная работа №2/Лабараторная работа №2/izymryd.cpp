#include "StdAfx.h"
#include "izymryd.h"
#include "conio.h"
#include <iostream>
using namespace std;
Izymryd::Izymryd(void)
{

}
void Izymryd::setcena(char *cennoctü)
{
	this->cennoctü = cennoctü;
}
void Izymryd::getcena()
{
	cout << this->cennoctü;
}
Izymryd::~Izymryd(void)
{
	
}




