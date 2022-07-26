#pragma once
#include "Map.h"

class Map;

class Player
{
private:
	int X;
	int Y;

public:
	Player();
	~Player();

	void Move(char key, Map& mapIns);
	int getX();
	int getY();
};

