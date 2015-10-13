#pragma once
#include <stdio.h>
#include <string.h>

class Kamen
{

public: Kamen()
{
			strcpy_s(name, "NONAME");

};
		Kamen(char *name)
		{
			strcpy_s(this->name, name);
			next = 0;
		}
		virtual ~Kamen()
		{
		}
		virtual void Show(void) = 0;
		virtual void Input(void) = 0;
protected: char name[64];


		   Kamen *next;
		   friend class List;

};
