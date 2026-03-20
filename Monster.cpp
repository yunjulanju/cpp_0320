#include "Monster.h"
#include <iostream>

AMonster::AMonster()
{
	X = 9;
	Y = 9;
	Mesh = 1;

	DropGold = 10;
}

AMonster::~AMonster()
{
}

void AMonster::Move(int Direction)
{
	if (Direction == 0)
	{
		X += 1;
		std::cout << "몬스터가 오른쪽으로 이동" << std::endl;
	}
	else if (Direction == 1)
	{
		X -= 1;
		std::cout << "몬스터가 왼쪽로 이동" << std::endl;
	}
	else if (Direction == 2)
	{
		Y += 1;
		std::cout << "몬스터가 아래로 이동" << std::endl;

	}
	else if (Direction == 3)
	{
		Y -= 1;
		std::cout << "몬스터가 위로 이동" << std::endl;

	}
}

void AMonster::Attack()
{
	std::cout << "몬스터가 공격" << std::endl;
}

void AMonster::Die()
{

}

int AMonster::Drop()
{
	std::cout << "몬스터가 "<< DropGold << " 골드를 드랍했다." << std::endl;
	return DropGold;
}