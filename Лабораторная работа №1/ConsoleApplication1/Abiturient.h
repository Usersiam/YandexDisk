#pragma once
#include "stdafx.h" 
#include "string.h" 
class Abiturient
{
	int id;
	int marks[4];
	char familia[14];
	char name[10];
	char otchestvo[14];
	char adress[14];
	char number[14];

public: Abiturient();
		Abiturient(int);
		Abiturient(const Abiturient &);
		void setMarks();
		void setFamilia_Adress_Number();

		~Abiturient(void);

		void print();
		void printBad(int);
		void printSum(int);
		int Good();
		void VyvodGood();
		
};