#include "stdafx.h"
#include "kamen.h"
#include "polydrag.h"
#include "locale"
#include <iostream>
#include <conio.h>
using namespace std;
int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "rus");
	Kamen kam1;
	int vibor;
	do{
		cout << "������� ����� --  �����" << endl;
		cout << " ������� ��������:" << endl << " 1-����������� ������, 2-��������������� ������:  ";
		vibor = _getch();

		if (vibor == 49) cout << "1", kam1.set("�����������");
		else if (vibor == 50) cout << "2", kam1.set("���������������");
		else system("cls");
	} while (vibor != 49 && vibor != 50);
	cout << endl << " ������ -> ";
	kam1.show();
	cout << endl;
	Polydrag vid_kamnia;
		do{
		cout << "����� -- ��������������� �����" << endl;
		cout << " ������� ��� �����:" << endl << " 1-�����:  ";
		vibor = _getch();
		if (vibor == 49) cout << "1", vid_kamnia.set_vid("�����");
			else system("cls");
	 } while (vibor != 49);
	cout << endl << " ������ -> ";
	vid_kamnia.show();
	vid_kamnia.show_vid();
	cout << endl;
	return 0;
}


