#include "Console.h"
#include <Windows.h>
#include <iostream>
#include <iomanip>


/*int* Console::getCurrentWindowSize()
{
	RECT rect;
	if (GetWindowRect(GetConsoleWindow(), &rect))
	{
		int width = rect.right - rect.left;
		int height = rect.bottom - rect.top;
		int dimensions[2];
		dimensions[0] = width;
		dimensions[1] = height;
		return dimensions;
	}
	

}*/

Console::Console()
{
	//int* dimensions = getCurrentWindowSize();
	//width = dimensions[0];
	//height = dimensions[1];
}


Console::~Console()
{
}

void Console::setToFullScreen()
{
	SetConsoleDisplayMode(GetStdHandle(STD_OUTPUT_HANDLE), CONSOLE_FULLSCREEN_MODE, 0);
}

void Console::setToWindowed()
{
	ShowWindow(GetConsoleWindow(), SW_MAXIMIZE);
}

void Console::showStartingScreen()
{
	print("Cabal",true);
	newLine();
	print("Press any key to start!",true);
	waitForKeystroke();

}



void Console::print(char * string, bool tabbed, bool centered)
{
	//==============TO IMPLEMENT CENTERED PRINTING===============//
	//if (centered == true) {}
	//else {}
	if (tabbed == true) {
		std::cout << "	";
	}
	std::cout << string;
	
}

void Console::newLine(short lines)
{
	for (int counter=0;counter<lines;counter++) {
		std::cout << std::endl;
	}
	
}

void Console::waitForKeystroke()
{
	std::cin.get();
}


