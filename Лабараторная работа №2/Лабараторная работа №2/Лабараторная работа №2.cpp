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
	k.setname(" ������");
	k.getname();
	cout << endl << endl << endl;

	Polydrag p;
	p.setname(" ���������������:");
	p.getname();
	cout << endl << endl << endl;

	Drag d;
	d.setname(" �����������:");
	d.getname();
	cout << endl;
	cout << "����� �� ���������:     ���:       ��� :          ����: "<<endl;
	Rybin r;
	r.setcena("                  3 --  ");
	r.getcena();
	r.setname("�����    ");
	r.getname();
	r.setVes("  30 ����� -    1 USD");
	r.getVes();
	
	Izymryd i;
	i.setcena("                  1 --  ");
	i.getcena();
	i.setname("�������  ");
	i.getname();
	i.setVes("  70 ����� -    1 USD");
	i.getVes();

	Almaz a;
	a.setcena("                  2 --  ");
	a.getcena();
	a.setname("�����    ");
	a.getname();
	a.setVes("  50 ����� -    1 USD");
	a.getVes();

	cout << endl;
	return 0;
}

