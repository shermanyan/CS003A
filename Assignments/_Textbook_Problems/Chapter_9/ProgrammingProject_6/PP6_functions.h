//
// Created by Sherman Yan on 10/4/22.
//

#ifndef CS003A_PP6_FUNCTIONS_H
#define CS003A_PP6_FUNCTIONS_H

#include <iostream>

std::string* addEntry(std::string *dynamicArray, int &size, std::string newEntry);
std::string* deleteEntry(std::string *dynamicArray, int &size, std::string entryToDelete);
void printArray(int size, const std::string *array);
#endif //CS003A_PP6_FUNCTIONS_H
