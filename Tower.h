#pragma once
#ifndef TOWER_H
#define TOWER_H
#include <iostream>
#include <vector>
#include <string>
#include <conio.h>

class Tower {
public:
	Tower(
		int AttackDamage,
		double AttackSpeed,
		int Range,
		int X,
		int Y) 
	{
		this->AttackDamage = AttackDamage;
		this->AttackSpeed = AttackSpeed;
		this->Range = Range;
		this->X = X;
		this->Y = Y;
	}
	virtual ~Tower() {}
	virtual void Ability() = 0;
	int AttackDamage;
	double AttackSpeed;
	int Range;
	int X;
	int Y;
};


#endif // !TOWER_H
