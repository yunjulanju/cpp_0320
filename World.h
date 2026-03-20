#pragma once

class AMonster;
class APlayer;

class UWorld
{
public:
	UWorld();
	~UWorld();

	APlayer* MyPlayer;
	AMonster* Monsters;

	void Start();

	int MonsterNum;
};

