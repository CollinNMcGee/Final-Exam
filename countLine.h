/**
 * @file countLine.h
 * @brief counts the number of lines in the file.
 * @param string pName
 * @Author Collin McGee
 * @date 12/3/2020
 */

#include <string>
#include <fstream>
#include <iostream>


void countLine(std::string pName) {
	std::string temp;
	int lines = 0;
	std::ifstream file;
	file.open(pName);
	if (file.is_open()) {
		while (getline(file, temp)) {
			lines++;
		}
		file.close();
	}
	else {
		lines = 1;
	}
	std::cout << lines << "Lines" << std::endl;
}