#ifndef CREATURE_H
#define CREATURE_H

#include <iostream>
#include <ctime>

class Creature {
private:
	int atkD,
		atkS,
		defD,
		defS,
		armor,
		strPts,
		lives;
	char type;
public:
	Creature();
	void setAtkD(int ad);
	void setAtkS(int as);
	void setDefD(int dd);
	void setDefS(int ds);
	void setArmor(int a);
	void setStrPts(int sp);
	void setType(char t);
	void setLives(int l);
	int getAtkD();
	int getAtkS();
	int getDefD();
	int getDefS();
	int getArmor();
	int getStrPts();
	char getType();
	int getLives();
	int rollDie(int max);
	virtual int attack(Creature b);
};

#endif