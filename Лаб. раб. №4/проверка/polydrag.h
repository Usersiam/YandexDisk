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
		virtual void Show(void)
		{
			cout << "name=  " << name << endl << "ves=      " << ves << endl << endl;
		}
		void Input(void)
		{
			cout << "name="; cin >> name;  cout << "ves="; cin >> ves;
		}
protected: char ves[64];
};