#ifndef MENU_H
#define MENU_H

#include <iostream>
#include <string>
#include "Barbarian.h"
#include "Medusa.h"
#include "HarryPotter.h"
#include "Vampire.h"
#include "BlueMen.h"
#include "Battle.h"

class Menu {
private:
	Creature* A;
	Creature* B;
public:
	void showChoices();		//Show main menu choices
	void showsCharacters();	//Show characters
	bool case1();			//Choose fighters and fight
	void case2();			//Quit
	~Menu();				//Deconstructor
};

#endif