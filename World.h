#pragma once
class UWorld
{
public:
	UWorld();
	~UWorld();

	class APlayer* Player;

	class AGoblin* Goblins;
	class ASlime* Slimes;
	class AWildBoar* WildBoars;

	int PlayerCount = 0;
	int GoblinCount = 0;
	int SlimeCount = 0;
	int WildBoarCount = 0;

};

