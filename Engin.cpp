#include "Engin.h"
#include "World.h"

UEngin::UEngin()
{
	MyWorld = new UWorld;
}

UEngin::~UEngin()
{
	delete MyWorld;
	MyWorld = nullptr;
}

void UEngin::Start(int MonsterNum)
{
	MyWorld->MonsterNum = MonsterNum;
	MyWorld->Start();
}
