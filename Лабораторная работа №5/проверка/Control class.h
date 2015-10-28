#pragma once
#include "stdafx.h"
#include <iostream>
#include "Drag.h"
#include "Rubin.h"
#include "Almaz.h"
#include "izymryd.h"


class Drag;

class Necklace
{
public:
	
	int weight();
	int  cost();
	int  sort();
	int  prozr();
	void insert(Drag*);
	void deleteDRAG();
	Necklace* next;
private:
	Drag* begin;
};


void Necklace::insert(Drag *p)
{
	Drag *r;
	r = begin;
	begin = p;
	p->next = r;
}



int Necklace::weight()
{
	int sum = 0;
	Drag* t;
	t = begin;
	while (t)
	{
		
			sum = sum + dynamic_cast<Drag*>(t)->getVes();
		
		t = t->next;
	}
	return sum;
}

int Necklace::cost()
{
	int sum = 0;
	Drag* t;
	t = begin;
	while (t)
	{
		
			sum = sum + t->getCost();
			t = t->next;
	}
	return sum;
}
int Necklace::sort()
{
	int mass[3],n=0;
	Drag* t;
	t = begin;
	while (t)
	{     
		
			mass[n] = t->getCost();
			
		t = t->next;
		n++;
	}
	
	
	return 0;
}
int Necklace::prozr()
{
	int mass[3], n = 0, h1, h2;
	Drag* t;
	t = begin;
	while (t)
	{
		
			mass[n] = t->getProzr();
			
		
		t = t->next;
		n++;
	}
	t = begin;
	cout << "\n Рамки прозрачности\n";
	cin >> h1 >> h2;
	cout << endl;
	cout << "\n Сортировка по прозрачности от  " << h1 << "  до  " << h2 << "   \n";
	for (n = 0; n <= 3,t; n++)
	{
		if (mass[n] >= h1 && mass[n] <= h2)t->getName(), cout << "      " << mass[n] << "   " ; cout << "\n";
		t = t->next;
	}
	cout << "\n";
	return 0;
}

void Necklace::deleteDRAG()
{
	Drag* t, *old;
	t = begin;
	while (t)
	{
		old = t;
		t = t->next;
		delete old;
	}
	begin = 0;
}