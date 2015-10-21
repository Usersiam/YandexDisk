#pragma once
#include "drag.h"
#include "iostream"
using namespace std;
class Izymryd :
	public Drag
{

public:
	Izymryd(char* name, char* ves, char* cost) :Drag(name){

		this->ves = ves;
		this->cost = cost;
	};

	void getVes()
	{
		cout << this->ves;
	};
	void getName()
	{
		cout << this->name;
	}; void getCost()
	{
		cout << this->cost;
	};
	void Show()
	{
		cout << this->name;
	};
	static void show()
	{
		Kamen *p = head;
		cout << "\nList:" << endl;
		while (p)
		{
			cout << endl;
			p->getName();
			cout << endl;
			p->getVes();
			cout << endl;
			p->getCost();
			cout << endl;
			if (p->next != NULL)
			{
				cout << "";
			}
			p = p->next;
		}
		cout << endl;
	};
	void add()
	{
		if (!head)
		{
			head = this;
			this->next = NULL;
		}
		else
		{
			Kamen *q = head;
			if (q->next == NULL)
			{
				q->next = this;
				this->next = NULL;
			}
			else
			{
				while (q->next != NULL)
				{
					q = q->next;
				}
				q->next = this;
				this->next = NULL;
			}
		}
	};

protected: char *cost;

		   char *ves;
};