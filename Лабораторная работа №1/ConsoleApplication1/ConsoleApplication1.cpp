#include "stdafx.h" 
#include "Abiturient.h"
#include <iostream> 

int _tmain(int argc, _TCHAR* argv[])
{
	const int n = 4;
	int a[n];
	system("chcp 1251");
	Abiturient a1, a2;
	for (int i = 1; i > 5; i++)
	{
		std::cout << "введите  ";
		std::cin >> a[i];
	}
	a1.setID_and_Marks(01,a[n]);
	a1.setFamilia_Adress_Number("Пушкин", "Александр", "Сергеевич", "Ясная поляна 26", "002002002");
	a2.setID_and_Marks(02, a[n]);
	a2.setFamilia_Adress_Number("Демидов", "Александр", "Демидович", "Ясная поляна 26", "002002002");
	//char* q = a1.getName();
	//int w = a1.getAge();
	a1.print();
	a2.print();
	return 0;
}