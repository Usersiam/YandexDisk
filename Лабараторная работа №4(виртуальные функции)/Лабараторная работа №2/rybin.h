#pragma once
#include "Drag.h"
class Rybin : public Drag
{
	char cennoct�1[64];
protected:
	Rybin *next;

public:

	Rybin(char*, char*, char*);
	virtual void getname(void);

	void show(void) const;
};