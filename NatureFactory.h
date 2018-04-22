#pragma once
#ifndef NATUREFACTORY_H
#define NATUREFACTORY_H
#include "AbstractFactory.h"

class NatureFactory : public AbstractFàñtory {
public:
	NatureFactory() {}
	NatureFactory(AbstractFàñtory* Factory) {}
	Tower* Create(char TowerID);
};


class NatureFirstTower : public Tower {
public:
	NatureFirstTower(int X, int Y) :
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


class NatureSecondTower : public Tower {
public:
	NatureSecondTower(int X, int Y) :
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

class NatureThirdTower : public Tower {
public:
	NatureThirdTower(int X, int Y) :
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

#endif // !NATUREFACTORY_H
