#include "Game.h"

void Game::StartGame() {
	std::cout << "Choose a race\n" << "1 - Inferno    2 - Nature\n";
	char race;
	race = _getche();
	switch (race)
	{
	case '1':
		Factory = new InfernoFactory;
		system("cls");
		break;
	case '2':
		Factory = new NatureFactory;
		system("cls");
		break;
	default:
		system("cls");
		StartGame();
	}
	while (true) {
		system("cls");
		for (int i = 0; i < FieldSize-30; i++) {
			for (int j = 0; j < FieldSize; j++) {
				std::cout << GamingField[i][j];
			}
			std::cout << "\n";
		}
		std::cout << "Choose new tower\n" << "1 - simple, 2 - special, 3 - extra\n";
		std::cout << "e - exit\n";
		char TowerID;
		TowerID = _getche();
		std::cout << "\n";
		if (TowerID == 'e') {
			break;
		}
		else if (TowerID >= '1' && TowerID <= '3') {
			Tower* newTower = Factory->Create(TowerID);
			GamingField[newTower->Y][newTower->X] = TowerID;
		}
	}
}

Game::Game(){
	GamingField = std::vector<std::vector<char>>(FieldSize-30, std::vector<char>(FieldSize, '0'));
}
