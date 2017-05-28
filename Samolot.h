#pragma once
#include <string>

enum SamolotRodzaj { Transportowy, Pasazerski, Wojskowy };

using namespace std;
class Samolot
{
public:
	enum Stan { Hangar, Pas, Startowanie, Lot, Ladowanie, Zaladunek, Wyladunek, Kontrola, Tankowanie };	
	Samolot() {};
	Samolot(int);
	virtual string podajRodzaj() = 0;
	virtual SamolotRodzaj podajTyp() = 0;
	int podajCzasStartu();
	int podajIdentyfikator();
	bool czyGotowyDoStartu();
	void ustawStan(Stan);
	string podajStan();
	Stan aktualnyStan();
protected:
	int ID_samolotu;
	bool gotowyDoStartu;
	int czasStartu;
	Samolot::Stan stan;
};

