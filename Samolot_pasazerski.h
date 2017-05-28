#pragma once
#include "Samolot.h"
class Samolot_pasazerski :
	public Samolot
{
public:
	Samolot_pasazerski(int a) : Samolot(a) {};
	string podajRodzaj();
	SamolotRodzaj podajTyp();
};

