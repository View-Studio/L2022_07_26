#include "Player.h"

Player::Player() : X{1}, Y{1}
{
}

Player::~Player()
{
}

void Player::Move(char key, Map& mapIns)
{
	if (key == 'W' || key == 'w')
	{
		if (mapIns.getMap()[Y - 1][X] == 1)
		{

		}
		else
		{
			mapIns.setMap(X, Y, 0);
			--Y;
			mapIns.setMap(X, Y, 1);
		}
	}

	if (key == 'A' || key == 'a')
	{
		if (mapIns.getMap()[Y][X-1] == 1)
		{

		}
		else
		{
			mapIns.setMap(X, Y, 0);
			--X;
			mapIns.setMap(X, Y, 1);
		}
	}

	if (key == 'S' || key == 's')
	{
		if (mapIns.getMap()[Y + 1][X] == 1)
		{

		}
		else
		{
			mapIns.setMap(X, Y, 0);
			++Y;
			mapIns.setMap(X, Y, 1);
		}
	}

	if (key == 'D' || key == 'd')
	{
		if (mapIns.getMap()[Y][X + 1] == 1)
		{

		}
		else
		{
			mapIns.setMap(X, Y, 0);
			++X;
			mapIns.setMap(X, Y, 1);
		}
	}
}

int Player::getX()
{
	return X;
}

int Player::getY()
{
	return Y;
}
