#include "NatureFactory.h"

Tower* NatureFactory::Create(char TowerID) {
	std::cout << "Enter coordinates X Y\n";
	int X, Y;
	std::cin >> X >> Y;
	switch (TowerID) {
	case '1':
		return new NatureFirstTower(X, Y);
	case '2':
		return new NatureSecondTower(X, Y);
	case '3':
		return new NatureSecondTower(X, Y);
	default:
		return nullptr;
	}
}