#pragma once

class UWorld;

class UEngin
{
public:
	UEngin();
	~UEngin();

	void Initialize();
	void Run();
	void Terminate();

	void Input();
	void Tick();
	void Render();

	UWorld* MyWorld;

	void Start(int MonsterNum);
};

