#pragma once
#ifndef ABSTRACTFACTORY_H
#define ABSTRACTFACTORY_H
#include "Tower.h"


class AbstractFàñtory {
public:
	virtual ~AbstractFàñtory() {}
	virtual Tower* Create(char TowerID) = 0;
};

#endif
