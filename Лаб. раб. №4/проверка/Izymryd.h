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
		Izymryd(char *name, char *ves, char *cost) : Drag(name, ves)
		{
			strcpy_s(Izymryd::cost, cost);
		}
		void Show(void)
		{
			cout << "name=  " << name << endl << "ves=      " << ves << endl << "cost =   " << cost << endl << endl;
		}
		void Input(void)
		{
			cout << "name=";
			cin >> name;
			cout << "ves=";
			cin >> ves;
			cout << "cost=";
			cin >> cost;
		}
protected: char cost[64];
};