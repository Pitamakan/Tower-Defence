#pragma once
#ifndef INFERNOFACTORY_H
#define INFERNOFACTORY_H
#include "AbstractFactory.h"


class InfernoFactory : public AbstractFàñtory {
public:
	InfernoFactory() {}
	InfernoFactory(AbstractFàñtory* Factory) {}
	Tower* Create(char TowerID);
};


class InfernoFirstTower : public Tower {
public:
	InfernoFirstTower(int X, int Y) :
		Tower(AttackDamage, AttackSpeed, Range, X, Y) {
			{
				this->X = X;
				this->Y = Y;
			}
	}
	int AttackDamage = 10;
	double AttackSpeed = 2.0;
	int range = 5;
	int X, Y;
	void Ability() {}
};


class InfernoSecondTower : public Tower {
public:
	InfernoSecondTower(int X, int Y) :
		Tower(AttackDamage, AttackSpeed, Range, X, Y) {
			{
				this->X = X;
				this->Y = Y;
			}
	}
	int AttackDamage = 20;
	double AttackSpeed = 1.5;
	int range = 7;
	int X, Y;
	void Ability() {}
};

class InfernoThirdTower : public Tower {
public:
	InfernoThirdTower(int X, int Y) :
		Tower(AttackDamage, AttackSpeed, Range, X, Y) {
		{
			this->X = X;
			this->Y = Y;
		}
	}
	const int AttackDamage = 10;
	double AttackSpeed = 7.0;
	int Range = 8;
	int X, Y;
	void Ability() {}
};

#endif