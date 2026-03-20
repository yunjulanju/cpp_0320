#include "Engine.h"
#include "World.h"

UEngine::UEngine()
{
	Init();
}

UEngine::~UEngine()
{
	Term();
}


void UEngine::Init()
{
	World = new UWorld();
	bIsRunning = true;
}

void UEngine::Run() //16
{
	//GameLoop
	while (bIsRunning) //16ms, 현질, 경준이를 갈군다.
	{
		Input();
		Tick();
		Render();
	}

}

void UEngine::Term()
{
	delete World;
	World = nullptr;
}

void UEngine::Input()
{

}


void UEngine::Tick()
{

}


void UEngine::Render()
{

}