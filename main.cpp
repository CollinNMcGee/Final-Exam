/**
 * @file main.cpp
 * @brief the main function were you input the file name and it calls the other two functions.
 * @Author Collin McGee
 * @date 12/3/2020
 */

#include <cstdlib>
#include <cctype>
#include <stdio.h>
#include <stdarg.h>
#include <string>
#include <fstream>
#include <iostream>
#include "countLine.h"
#include "countChar.h"

int main() {
	std::string pName;
	std::cout << "Please enter the name of your file: ";
	std::cin >> pName;
	countLine(pName);
	countChar(pName);

}