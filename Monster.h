#pragma once
class AMonster
{
public:
	AMonster();
	~AMonster();

	int X;
	int Y;
	int Mesh;

	int DropGold;

	void Move(int Direction);
	void Attack();
	int Drop();
};

