#pragma once
#include "kamen.h"
class Polydrag :
	public Kamen
{
	char *stependia;
public:
	Polydrag(void);
	void setPolydrag(char *x);
	void getPolydrag();
	~Polydrag(void);
};
