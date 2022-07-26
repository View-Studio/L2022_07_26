#pragma once
#include <vector>
#include "Player.h"

class Player;

using namespace std;

class Map
{
private:
	vector<vector<int>> map;

public:
	Map();

	vector<vector<int>> getMap();

	void setMap(int X, int Y, int status);
};

