#pragma once
#include "kamen.h"
class Drag :
	public Kamen
{
	char names[64];
	char ves[64];

	

public:
	Drag *next;
	Drag();
	Drag(char*, char*);
	virtual void getname();
	void show(void) const;
	
	
};