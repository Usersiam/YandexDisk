#pragma once
#include "kamen.h"
#include "iostream"
using namespace std;
class Drag :
	public Kamen
{

  public: Drag()
	{

	}
	Drag(char *name, int ves) : Kamen(name)
	{
		this->ves = ves;
	}
	virtual void getname()
	{
		
		Kamen::getname();
		cout << " ves  " << ves << endl;
	
	};
	int vess()
	{
		return ves;
	}
	
	protected: int ves;
			  
	};