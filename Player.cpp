#include "Player.h"
#include "Monster.h"
#include <iostream>

APlayer::APlayer()
{
	X = 1;
	Y = 1;
	Mesh = 0;

	Gold = 0;
}

APlayer::~APlayer()
{
}

void APlayer::Move(int KeyValue)
{
	if (KeyValue == 0)
	{
		X += 1;
		std::cout << "플레이어가 오른쪽으로 이동" << std::endl;
	}
	else if (KeyValue == 1)
	{
		X -= 1;
		std::cout << "플레이어가 왼쪽로 이동" << std::endl;
	}
	else if (KeyValue == 2)
	{
		Y += 1;
		std::cout << "플레이어가 아래로 이동" << std::endl;
	}
	else if (KeyValue == 3)
	{
		Y -= 1;
		std::cout << "플레이어가 위로 이동" << std::endl;
	}
}

void APlayer::Attack()
{
	std::cout << "플레이어가 공격" << std::endl;
}

void APlayer::Collect(int GetGold)
{
	Gold += GetGold;
}
