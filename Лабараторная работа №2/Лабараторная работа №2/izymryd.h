#pragma once
#include "Drag.h"
class Izymryd :
	public Drag
{
	char *cennoctü;
public:
	Izymryd(void);
	void setcena(char *cennoctü);
	void getcena();
	~Izymryd(void);
};