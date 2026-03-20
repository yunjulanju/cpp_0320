#include "World.h"
#include "Player.h"
#include "Monster.h"
#include "Slime.h"
#include "Goblin.h"
#include "Boar.h"

UWorld::UWorld()
{
	MyPlayer = new APlayer;
	Monsters = new AMonster[MonsterNum];
	 
}

UWorld::~UWorld()
{
	delete MyPlayer;
	MyPlayer = nullptr;

	delete[] Monsters;
	Monsters = nullptr;
}

void UWorld::Start()
{
	Monsters[0] = *new ASlime;
	Monsters[1] = *new ABoar;
	Monsters[2] = *new AGoblin;

	for (int i = 3; i < MonsterNum; i++)
	{
		Monsters[i] = *new ASlime;
	}
}