#pragma once
#ifndef ABSTRACTFACTORY_H
#define ABSTRACTFACTORY_H
#include "Tower.h"


class AbstractF��tory {
public:
	virtual ~AbstractF��tory() {}
	virtual Tower* Create(char TowerID) = 0;
};

#endif
