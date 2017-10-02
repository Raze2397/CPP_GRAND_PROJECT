#pragma once

class Console	
{
private:
	//int width;
	//int height;
public:

	void setToFullScreen();
	void setToWindowed();
	void showStartingScreen();
	void print(char* string , bool tabbed=false , bool centered=false);
	void newLine(short lines=1);
	void waitForKeystroke();
	//====================FIX THAT METHOD===============//
	//int* getCurrentWindowSize();
	Console();
	~Console();
};
