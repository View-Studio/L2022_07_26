#include <iostream>
#include <conio.h>
#include "Player.h"
#include "Monster.h"

using namespace std;

int main()
{
	Player player;
	Map map;
	char keyCode = ' ';

	while (true)
	{
		// Input()
		keyCode = _getch();

		// Process()
		player.Move(keyCode, map);

		// Render()
		system("Cls");
		
		for (int i = 0; i < 10; ++i)
		{
			for (int j = 0; j < 10; ++j)
			{
				if (map.getMap()[i][j] == 0)
				{
					cout << ' ';
				}
				else if (map.getMap()[i][j] == 1)
				{
					cout << '*';
				}
				else if (map.getMap()[i][j] == 2)
				{
					cout << 'P';
				}
			}
			cout << endl;
		}
	}

	return 0;
}