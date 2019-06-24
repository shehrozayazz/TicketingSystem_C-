#include <iostream>
#include "StartUp.h"
#include <string>
#include <cstring>
#include <Windows.h>
#include "Main.h"
#include <conio.h>
#include <iomanip>
using namespace std;

int main()//**********************************************************************************************************************************
{
    startUp();
	Menu object;
	object.MenuMain("1-) Guest Mode", "2-) Login", "3-) Signup","4-) Exit");
	
	return 0;
}
	//****************************************************************************************************************************************


