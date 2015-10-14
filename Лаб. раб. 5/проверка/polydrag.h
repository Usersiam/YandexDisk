#pragma once
#include "kamen.h"
#include "iostream"
using namespace std;
class Polydrag :
	public Kamen
{
public: Polydrag()
{

}
		Polydrag(char *name, char *ves) : Kamen(name)
		{
			strcpy_s(Polydrag::ves, ves);
		}
		virtual void getname()
		{
			Kamen::getname();
			cout << "ves  " << ves << endl;
			
		};
protected: char ves[64];
};