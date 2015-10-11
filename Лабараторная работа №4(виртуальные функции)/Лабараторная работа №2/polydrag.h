#pragma once
#include "kamen.h"
class Polydrag :
	public Kamen
{
	char *name;
public:
	Polydrag();
	Polydrag(char*);
	virtual void getname();
	
	~Polydrag();
};
