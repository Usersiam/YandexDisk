#include "kamen.h"
class List
	{
	public: List() 
	{ 
				begin = 0;
	} 
			~List();
			void Insert(Kamen *); 
			void Show(void); 
	private: Kamen *begin; 
	};
	 List::~List()
	{
	Kamen *r;
		 while (begin) 
		{
			r = begin; 
			 begin = begin->next;
			delete r; 
		}
	}
	 void List::Insert(Kamen *p)
		{
		 Kamen *r;
		r = begin;
		begin = p;
		p->next = r;
	 }
	void List::Show(void) 
	{
		Kamen *r; r = begin;
		while (r) 
		{
			
			r->Show(); 
			r = r->next; 
		} 
	}