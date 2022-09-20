//
// Created by Sherman Yan on 9/1/22.
//

#ifndef CS003A_REVIEWFUNCTION_H
#define CS003A_REVIEWFUNCTION_H

#include <iostream>
#include <vector>

double maxx(double val1, double val2);

std::vector<std::string> splitString(std::string inputString, char delimiter = ' ');

bool isEven(std::vector<std::vector<char>> v);
void fillVector(std::vector<std::vector<char>> v);
std::vector<char> getLetters(int size);
void shuffle(std::vector<char> &v);
void printVector(std::vector<std::vector<char>> v);
void flip(std::vector<std::vector<char>> v, int row, int col);
char getInput();
void output(std::string message);


#endif //CS003A_REVIEWFUNCTION_H
