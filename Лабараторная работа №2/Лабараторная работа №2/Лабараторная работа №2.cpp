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
		cout << "Базовый класс --  камни" << endl;
		cout << " Введите подкласс:" << endl << " 1-драгоценный камень, 2-полудрагоценный камень:  ";
		vibor = _getch();

		if (vibor == 49) cout << "1", kam1.set("драгоценный");
		else if (vibor == 50) cout << "2", kam1.set("полудрагоценный");
		else system("cls");
	} while (vibor != 49 && vibor != 50);
	cout << endl << " Камень -> ";
	kam1.show();
	cout << endl;
	Polydrag vid_kamnia;
		do{
		cout << "класс -- полудрагоценные камни" << endl;
		cout << " Введите вид камня:" << endl << " 1-рубин:  ";
		vibor = _getch();
		if (vibor == 49) cout << "1", vid_kamnia.set_vid("рубин");
			else system("cls");
	 } while (vibor != 49);
	cout << endl << " Камень -> ";
	vid_kamnia.show();
	vid_kamnia.show_vid();
	cout << endl;
	return 0;
}


