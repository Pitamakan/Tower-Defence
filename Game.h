#pragma once
#ifndef GAME_H
#define GAME_H
#include "InfernoFactory.h"
#include "NatureFactory.h"

class Game {
public:
	Game();
	void StartGame();
protected:
	AbstractFàñtory * Factory;
private:
	const unsigned int FieldSize = 50;
	std::vector<std::vector<char>> GamingField;
};

#endif // !GAME
