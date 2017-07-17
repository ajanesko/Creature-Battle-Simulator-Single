#include "Menu.h"
#include <iostream>

Menu::~Menu() {
	delete A;
	delete B;
}

bool Menu::case1() {
	int choice1,
	 	choice2;
	char playAgain;

	std::cout << "Select the first figher.\n";
	showsCharacters();
	//input validation
	while (!(std::cin >> choice1)) {
		std::cout << "Must enter a number.\n";
		std::cin.clear();
		std::cin.ignore(100, '\n');
	}
	std::cout << "Select the second fighter.\n";
	showsCharacters();
	//input validation
	while (!(std::cin >> choice2)) {
		std::cout << "Must enter a number.\n";
		std::cin.clear();
		std::cin.ignore(100, '\n');
	}

	switch (choice1) {
	case 1:
		A = new Barbarian();
		std::cout << "Barbarian has been selected\n";
		break;
	case 2:
		A = new Medusa();
		std::cout << "Medusa has been selected\n";
		break;
	case 3:
		A = new HarryPotter();
		std::cout << "Harry Potter has been selected\n";
		break;
	case 4:
		A = new Vampire();
		std::cout << "Vampire has been selected\n";
		break;
	case 5:
		A = new BlueMen();
		std::cout << "Blue Men has been selected\n";
		break;
	}

	switch (choice2) {
	case 1:
		B = new Barbarian();
		std::cout << "Barbarian has been selected\n\n";
		break;
	case 2:
		B = new Medusa();
		std::cout << "Medusa has been selected\n\n";
		break;
	case 3:
		B = new HarryPotter();
		std::cout << "Harry Potter has been selected\n\n";
		break;
	case 4:
		B = new Vampire();
		std::cout << "Vampire has been selected\n\n";
		break;
	case 5:
		B = new BlueMen();
		std::cout << "Blue Men has been selected\n\n";
		break;
	}

	Battle(A, B);

	std::cout << "Do you want to play again? (Y)es or (N)o\n";
	std::cin >> playAgain;
	if (playAgain == 'y' || playAgain == 'Y') {
		return true;
	}
	else if (playAgain == 'n' || playAgain == 'N') {
		return false;
	}
}

void Menu::case2() {
	//Exits program
	exit(1);
}

void Menu::showChoices() {
	std::cout << "Project 3\nPlease enter number 1-2.\n";
	std::cout << "1: Battle System\n";
	std::cout << "2: Quit\n\n";
}

void Menu::showsCharacters() {
	std::cout << "Fighter choices\n";
	std::cout << "1) Barbarian\n";
	std::cout << "2) Medusa\n";
	std::cout << "3) Harry Potter\n";
	std::cout << "4) Vampire\n";
	std::cout << "5) Blue Men\n";
}