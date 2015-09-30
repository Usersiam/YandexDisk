#include "stdafx.h"
#include "kamen.h"
#include "polydrag.h"
#include "drag.h"
#include "izymryd.h"
#include "rybin.h"
#include "almaz.h"
#include "locale"
#include <iostream>
#include <conio.h>
using namespace std;
int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "rus");

	Kamen k;
	k.setname(" камень");
	k.getname();
	cout << endl << endl << endl;

	Polydrag p;
	p.setname(" полудрагоценный:");
	p.getname();
	cout << endl << endl << endl;

	Drag d;
	d.setname(" драгоценный:");
	d.getname();
	cout << endl;
	cout << "номер по стоимости:     имя:       вес :          цена: "<<endl;
	Rybin r;
	r.setcena("                  3 --  ");
	r.getcena();
	r.setname("рубин    ");
	r.getname();
	r.setVes("  30 грамм -    1 USD");
	r.getVes();
	
	Izymryd i;
	i.setcena("                  1 --  ");
	i.getcena();
	i.setname("изумруд  ");
	i.getname();
	i.setVes("  70 грамм -    1 USD");
	i.getVes();

	Almaz a;
	a.setcena("                  2 --  ");
	a.getcena();
	a.setname("алмаз    ");
	a.getname();
	a.setVes("  50 грамм -    1 USD");
	a.getVes();

	cout << endl;
	return 0;
}

