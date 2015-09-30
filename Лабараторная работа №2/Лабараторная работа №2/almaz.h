#pragma once
#include "Drag.h"
class Almaz :
	public Drag
{
	char *cennoctü;
public:
	Almaz(void);
	void setcena(char *cennoctü);
	void getcena();
	~Almaz(void);
};