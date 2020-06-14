#pragma once
#include <iostream>

class CController
{
public:

	void Print(const char* text)
	{
		std::cout << text << std::endl;
	}

	std::string& GetConsoleInput()
	{
		std::cin >> mLastMessage;
		return mLastMessage;
	}

private:
	std::string mLastMessage;

};