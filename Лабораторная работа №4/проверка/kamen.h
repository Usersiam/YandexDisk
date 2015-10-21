#pragma once
#include <stdio.h>
#include <string.h>

class Kamen
{

public: Kamen *next;

			Kamen()
{
						this->name = name;

};
		Kamen(char *name)
		{
			this->name = name;
			
		}
		virtual ~Kamen()
		{
		}
		virtual void Show() = 0;
		virtual void getVes() = 0;
		virtual void getName() = 0;
		virtual void getCost() = 0;

protected: char *name;
		   char *ves;
		   char *cost;
		   static Kamen *head;

		 
		   
		  
};
