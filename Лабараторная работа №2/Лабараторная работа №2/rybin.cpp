#include "StdAfx.h"
#include "rybin.h"
#include "conio.h"
#include <iostream>
using namespace std;
Rybin::Rybin(void)
{

}

void Rybin::setcena(char *cennoctü)
{
	this->cennoctü = cennoctü;
}
void Rybin::getcena()
{
	cout << this->cennoctü;
}
Rybin::~Rybin(void)
{

}

