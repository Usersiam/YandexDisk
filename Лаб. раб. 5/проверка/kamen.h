#pragma once
#include <stdio.h>
#include <string.h>
#include "iostream"
class Kamen
{

public: Kamen()
{
			strcpy_s(name, "NONAME");

};
		Kamen(char *name)
		{
			strcpy_s(this->name, name);
			
		}
		virtual ~Kamen()
		{
		}
		virtual void getname(void)
		{
			std::cout << "name  " << name << std::endl;

		};
protected: char name[64];

};
