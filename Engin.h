#pragma once

class UWorld;

class UEngin
{
public:
	UEngin();
	~UEngin();

	UWorld* MyWorld;

	void Start(int MonsterNum);
};

