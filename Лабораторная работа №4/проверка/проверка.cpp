#include "stdafx.h"
#include "drag.h"
#include "polydrag.h"
#include "almaz.h"
#include "Rubin.h"
#include "Izymryd.h"
#include <iostream>
#include <conio.h>
using namespace std;
Kamen *Kamen::head = NULL;


int main(void)
{
	setlocale(LC_ALL, "rus");

	cout << "   " << endl << endl << "--------------------------------------" << endl;

	system("chcp 1251");
	
	Almaz kam1("�����", "��� 10", "30$");
	kam1.add();
	Rubin kam2("�����", "��� 20", "20$");
	kam2.add();
	Izymryd kam3("�������", "��� 30", "10$");
	kam3.add();
	
	cout << "�����:" << endl;
Almaz::show();

	
	

		return 0;
}









	
