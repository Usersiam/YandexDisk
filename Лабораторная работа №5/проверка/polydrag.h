#pragma once
#include "kamen.h"
#include "iostream"
using namespace std;
class Polydrag :
	public Kamen
{

public:

	Polydrag(char *name) :Kamen(name)
	{
		cout << "create polydrag" << endl;
	}


};