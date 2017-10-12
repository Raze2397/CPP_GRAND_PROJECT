#include "Console.h"
#include <Windows.h>
#include <iostream>
//#include <iomanip>


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

bool Console::checkNameForValidity(char * name)
{
	bool allOK = true;
	for (short counter = 0; counter < 16; counter++) {
		if ((name[counter] < 0) || (name[counter] > 0 && name[counter] < 65) || (name[counter] > 90 && name[counter] < 97) || (name[counter] > 122)) {
			allOK = false;
		}
	}
	if (name[16] != '\0')allOK = false;
	if (name[0] == '\0')allOK = false;
	if (allOK == false) {
		print("Your name contains invalid characters or is shorter than 1 letter or longer than 16 letters, please try again!");
		return false; 
	}
	else return true;
}

char* Console::characterCreationName()
{
	char* name = new char[100]();
	print("Choose your character's name: ");
	do {
		std::cin.getline(name, 100);
	} while (!checkNameForValidity(name));
	return name;
}

void Console::showStartingScreen()
{
	print("Cabal", true);
	newLine();
	print("Press any key to start!", true);
	waitForKeystroke();

}
