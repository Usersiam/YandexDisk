#pragma once
#include "kamen.h"
class Polydrag : public  Kamen
{

	char *vid_kamnia;
public:
	Polydrag(void);
	void set_vid(char *vid);
	void show_vid();
	
};
