#pragma once

class Console	
{
private:
	//int width;
	//int height;
public:
	char* characterCreationName();
	void showStartingScreen();
	void setToFullScreen();
	void setToWindowed();
	void print(char* string , bool tabbed=false , bool centered=false);
	void newLine(short lines=1);
	void waitForKeystroke();
	bool checkNameForValidity(char* name);
	//====================FIX THAT METHOD===============//
	//int* getCurrentWindowSize();
	Console();
	~Console();
};
