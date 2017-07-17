/****************************************************
*Program Name: Lab 6 - Linked List					*
*Author: Gary Janesko								*
*Date: 05/12/2017									*
*Description: Lets user select two creatures to		*
*battle ,prints out the damage done each round, and	*
*declars the winner when one creature runs out of	*
*strength points.									*
****************************************************/

#include "Menu.h"

int main() {
	Menu m;						//Creates menu object
	int choice;					//menu choice variable
	bool playAgain = true;		//Bool variable to re-run program

	while (playAgain) {
		m.showChoices();
		while (!(std::cin >> choice)) {
			std::cout << "Must enter a number.\n";
			std::cin.clear();
			std::cin.ignore(100, '\n');
		}

		switch (choice) {
			//Battle System
		case 1:
			playAgain = m.case1();
			break;
			//Quit
		case 2:
			m.case2();
			playAgain = false;
		}
	}


	return 0;
}