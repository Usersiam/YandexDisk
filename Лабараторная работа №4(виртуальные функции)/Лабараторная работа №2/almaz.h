#pragma once
#include "Drag.h"
class Almaz :
	public Drag
{
	char cennoct�3[64];
protected:
	Almaz *next;

public:
	Almaz();
	Almaz(char*, char*, char*);
	virtual void getname();
	void show(void) const;
};