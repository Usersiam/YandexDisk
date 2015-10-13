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
	Drag(char *name, char *ves) : Kamen(name)
	{
	strcpy_s(Drag::ves, ves);
	}
	virtual void Show(void)
	{
		cout << "name=  " << name << endl << "ves=      " << ves << endl << endl;
	}
	void Input(void)
	{
	cout << "name=";
	cin >> name;  
	cout << "ves="; 
	cin >> ves;
	}
	protected: char ves[64];
			   friend class List;
	};