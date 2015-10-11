#pragma once
class Kamen
{
	char name[64];
protected:
	static Kamen *head;
public:
	Kamen *next;
	Kamen();
	Kamen(char*);
	virtual void getname();
	virtual void show(void) const;
	
};
