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

	Kamen k("камни ");
	k.getname();
	cout << endl;


	Polydrag p("полудрагоценные:");
	p.getname();
	cout << endl;

	  Drag d("драгоценные:","120");
	d.getname();
	cout << endl;
	
	cout << "название:    вес:    цена:" << endl<<endl;
	 Rybin r("рубин        ", "50", "    1$");
	
	r.getname();
	cout << "   " << endl;
		
		
	Izymryd i("изумруд      ", "40","    2$");
	
	i.getname();
	cout << "   " << endl;
	

	  Almaz a("алмаз        ", "30","    3$" );
	
	a.getname();

	cout << "   " << endl;
	

	cout << endl;
	cout << "--------------------------------------" << endl;
	
	Drag *pp;
	Rybin *pt;
	pt = new Rybin ("рубин        ", "50", "    1$");
	pp = &d; pp->show(); 
	pp = pt; pp->show();
	
	return 0;
}

