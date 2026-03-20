#pragma once
class APlayer
{
public:
	APlayer();
	~APlayer();

	int X;
	int Y;
	int Mesh;

	int Gold;

	void Move(int KeyValue);
	void Attack();
	void Collect(int GetGold);
};

