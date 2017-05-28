#pragma once
#include <vector>
#include "Samolot.h"
#include "Pas.h"
using namespace std;

class Lotnisko
{
	vector<Samolot*> samoloty;
	vector<Pas*> pasy;
	int samolot_id = 0;
	int pas_id = 0;
public:
	Lotnisko() {};
	bool wypiszSamoloty();
	bool wypiszPasy();
	void stworzSamolot(SamolotRodzaj);
	void stworzPas();
	void zwolnijPas(int);
	Samolot* znajdzSamolot(int);
	Pas* znajdzPas(int);
	virtual ~Lotnisko();
};

