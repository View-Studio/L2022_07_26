#pragma once
#include "Location.h"

class Player : public Location
{
public:
	Player();
	~Player();

	void Move();
};

