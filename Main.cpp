#include <iostream>
#include <cstdlib>
#include <ctime>

#include "Engine.h"
#include "Player.h"
#include "WildBoar.h"
#include "Goblin.h"
#include "Slime.h"

using namespace std;

int main()
{
	srand(static_cast<unsigned int>(std::time(0)));

	int MinWildBoar = 3;
	int MaxWildBoar = 10;

	int MinGoblin = 1;
	int MaxGoblin = 3;

	int MinSlime = 5;
	int MaxSlime = 10;

	static int WildBoarCount = rand() % (MaxWildBoar + 1) + MinWildBoar;
	static int GoblinCount = rand() % (MaxGoblin + 1) + MinGoblin;
	static int SlimeCount = rand() % (MaxSlime + 1) + MinSlime;

	AWildBoar* WildBoars = new AWildBoar[WildBoarCount];
	AGoblin* Goblins = new AGoblin[GoblinCount];
	ASlime* Slimes = new ASlime[SlimeCount];

	for (int i = 0; i < WildBoarCount; i++)
	{
		WildBoars[i].Move();
	}

	for (int i = 0; i < GoblinCount; i++)
	{
		Goblins[i].Move();
	}
	for (int i = 0; i < SlimeCount; i++)
	{
		Slimes[i].Move();
	}

	delete[] WildBoars;
	WildBoars = nullptr;
	delete[] Goblins;
	Goblins = nullptr;
	delete[] Slimes;
	Slimes = nullptr;

	return 0;
}