#pragma once
#include "drag.h"
#include "iostream"
using namespace std;
class Almaz :
	public Drag
{

public: 
	Almaz()
	{

	}
	Almaz(char* name, int ves, int cost, int  prozr) :Drag(name){

		this->ves = ves;
		this->cost = cost;
		this->prozr = prozr;
	};

	int getVes()
	{
		//cout << this->ves;
		return ves;
	};
	int getProzr()
	{
		//cout << this->prozr;
		return prozr;
	};
	void getName()
	{
	cout << this->name;
	
	}; int getCost()
	{
		//cout << this->cost;
		return cost;

	};
	void Show()
	{
		cout << this->name;
	};
protected: int  cost;
		   int  prozr;
		   int  ves;
};