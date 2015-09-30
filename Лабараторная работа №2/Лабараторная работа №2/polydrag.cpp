#include "StdAfx.h"
#include "polydrag.h"
#include "conio.h"
#include <iostream>
using namespace std;
Polydrag::Polydrag(void)
{

}
void Polydrag::set_vid(char *vid)
{
	this->vid_kamnia = vid;
}
void Polydrag::show_vid()
{
	
	cout <<vid_kamnia << endl;
}






