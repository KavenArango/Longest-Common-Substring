/************************
Program: main.cpp
Purpose: Given two strings 'X' and 'Y', find the length of the longest common substring.
Author:  Peter Baker, Jacob Burton, and Kaven Arango
Date:    Nov 19, 2020
*********************************/
#include <iostream>
#include <string>
#include "Substring.h"


using namespace std;


int main()
{
	Substring* substring = new Substring("Test", "Test2");
	
	substring->MakeSubString();

	delete substring;
	return 0;
}