#pragma once
#include <string>
class Pas
{
	int ID_samolotu;
	int ID_pasa;
public:
	Pas(int a);
	bool czyWolny();
	int podajIdentyfikator();
	int podajSamolot();
	std::string podajStan();
	void przypiszSamolot(int);
	void zwolnij();
};

