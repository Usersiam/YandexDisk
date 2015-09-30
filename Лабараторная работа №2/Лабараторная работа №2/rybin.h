#pragma once
#include "Drag.h"
class Rybin :
	public Drag
{
	char *cennoctü;
public:
	Rybin(void);
	void setcena(char *cennoctü);
	void getcena();
	~Rybin(void);
};