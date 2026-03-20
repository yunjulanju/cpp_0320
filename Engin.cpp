#include "Engin.h"
#include "World.h"

UEngin::UEngin()
{
	Initialize();
}

UEngin::~UEngin()
{
	Terminate();
}

void UEngin::Initialize()
{
	MyWorld = new UWorld;
}

void UEngin::Run()
{
	Input();
	Tick();
	Render();
}

void UEngin::Terminate()
{
	delete MyWorld;
	MyWorld = nullptr;
}

void UEngin::Input()
{
}

void UEngin::Tick()
{
}

void UEngin::Render()
{
}

void UEngin::Start(int MonsterNum)
{
	MyWorld->MonsterNum = MonsterNum;
	MyWorld->Start();
}
