#pragma once
#include "almaz.h"
#include "Rubin.h"
#include "Izymryd.h"

#include "iostream"
using namespace std;
class Necklace
	
{ char *name;
	   char *ves;
	   char *cost;
	   Rubin kam11;
	   Almaz kam12;
	   Izymryd kam13;
	  

public:
  
	Necklace(Rubin kam111, Almaz kam112,Izymryd kam113,char *name, char *ves, char *cost)
	{
		this->kam11 = kam111;
		this->kam12 = kam112;
		this->kam13 = kam113;
		this->name = name;
		this->ves = ves;
		this->cost = cost;

	}
	


	

};