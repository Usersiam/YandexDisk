#include "stdafx.h"
#include "kamen.h"
#include "polydrag.h"
#include "drag.h"
#include "list.h"
#include "almaz.h"
#include "rybin.h"
#include "izymryd.h"
#include <iostream>
#include <conio.h>
using namespace std;
int main(void)
{
	setlocale(LC_ALL, "rus");

	

	cout << "   " << endl << endl << "--------------------------------------" << endl;

	system("chcp 1251");
	List list;
	Drag *ps;
	Polydrag *pt;
	Almaz *pq;
	Rybin *pw;
	Izymryd *pf;
	ps = new Drag("����� ����������� ������", "��� 120");
	list.Insert(ps);
	pt = new Polydrag("����� ��������������� ������", "��� 0");
	list.Insert(pt);
	pq = new Almaz("�����", "��� 40", "20$");
	list.Insert(pq);
	pw = new Rybin("�����", "��� 40", "40$");
	list.Insert(pw);
	pf = new Izymryd("�������", "��� 40", "30$");
	list.Insert(pf);
	int u;
	cout << "1 - ��������" << endl << "2- �����" << endl;
	cin >> u;
	switch (u)
	{
	case 1:
		ps = new Drag;
	ps->Input();
	list.Insert(ps);
	pt = new Polydrag;
	pt->Input();
	list.Insert(pt);
	list.Show();
	break;

	case 2:	list.Show(); break;
	}
	





	return 0;
}









	/*
	cout << "������ :" << endl;*/

	/*Kamen *pp[10];

	Rybin *newobj1 =  new Rybin("�����        ", "50", "    1$");
	pp[1] = newobj1;

	Almaz *newobj2 = new Almaz("�����        ", "40", "    1$");
	pp[2] = newobj2;

	Izymryd *newobj3 = new Izymryd("�������        ", "30", "    1$");
	pp[3] = newobj3;

	Drag *newobj4 = new Drag("����������� ", " ����� ��� 120");
	pp[4] = newobj4;

	pp[4]->getname();

	cout << endl;

	pp[1]->getname();

	cout << endl;

	pp[2]->getname();

	cout << endl;

	pp[3]->getname();

	cout << endl;*/

