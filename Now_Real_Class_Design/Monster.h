#pragma once
#include "Location.h"

class Monster : public Location
{
public:
	Monster();
	~Monster();

	void Move();
};

