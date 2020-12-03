/**
 * @file countChar.h
 * @brief counts the number of characters in the file.
 * @param string pName
 * @Author Collin McGee
 * @date 12/3/2020
 */

#include <string>
#include <fstream>
#include <iostream>


void countChar(std::string pName) {
	std::string temp;
	int count = 0;
	std::ifstream file;
	file.open(pName);
	if (file.is_open()) {
		while (getline(file, temp)) {
			count += temp.length();
		}
		file.close();
	}
	else {
		temp = "Athens";
		count = temp.length();
	}
	std::cout << count << "Characters" << std::endl;
}