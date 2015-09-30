#pragma once
#include "kamen.h"
class Drag :
	public Kamen
{
	char *type;
	char *ves;
public:
	Drag(void);
	void settype(char *type);
	void gettype();
	void setVes(char *ves);
	void getVes();
	~Drag(void);
};