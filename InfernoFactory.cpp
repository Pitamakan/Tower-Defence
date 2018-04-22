#pragma once
#include "InfernoFactory.h"

Tower* InfernoFactory::Create(char TowerID) {
	std::cout << "Enter coordinates X Y\n";
	int X, Y;
	std::cin >> X >> Y;
	switch (TowerID) {
	case '1':
		return new InfernoFirstTower(X,Y);
	case '2':
		return new InfernoSecondTower(X,Y);
	case '3': 
		return new InfernoSecondTower(X,Y);
	default:
		return nullptr;
	}
}