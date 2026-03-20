#include <iostream>
#include "Engin.h"

using namespace std;

int main()
{
	UEngin* MyEngin = new UEngin;
	MyEngin->Run();
	delete MyEngin;
}