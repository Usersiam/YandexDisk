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

	Kamen k("����� ");
	k.getname();
	cout << endl;


	Polydrag p("���������������:");
	p.getname();
	cout << endl;

	  Drag d("�����������:","120");
	d.getname();
	cout << endl;
	
	cout << "��������:    ���:    ����:" << endl<<endl;
	 Rybin r("�����        ", "50", "    1$");
	
	r.getname();
	cout << "   " << endl;
		
		
	Izymryd i("�������      ", "40","    2$");
	
	i.getname();
	cout << "   " << endl;
	

	  Almaz a("�����        ", "30","    3$" );
	
	a.getname();

	cout << "   " << endl;
	

	cout << endl;
	cout << "--------------------------------------" << endl;
	
	Drag *pp;
	Rybin *pt;
	pt = new Rybin ("�����        ", "50", "    1$");
	pp = &d; pp->show(); 
	pp = pt; pp->show();
	
	return 0;
}

