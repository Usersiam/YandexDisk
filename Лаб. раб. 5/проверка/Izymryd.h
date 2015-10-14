#pragma once
#include "drag.h"
#include "iostream"
using namespace std;
class Izymryd :
	public Drag
{

public: Izymryd()
{

}
		Izymryd(char *name, int ves, int cost, int transparent) : Drag(name, ves)
		{

			this->cost = cost;
			this->transparent = transparent;

		}
		void getname()
		{
			Drag::getname();
			cout << "cost  " << cost << "$" << endl<<endl;
			cout << "transparent  " << transparent << endl;
			cout << "   " << endl << endl << "--------------------------------------" << endl;
		};
		
protected: int cost;
		   int transparent;
};