#pragma once
#include "Drag.h"
class Izymryd :
	public Drag
{
	char cennoct�2[64];
protected:
	Izymryd *next;
	
public:
	Izymryd();
	Izymryd(char*, char*, char*);
	virtual void getname();
	virtualvoid show(void) const;
	
};
