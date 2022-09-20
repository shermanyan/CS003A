//
// Created by Dave R. Smith on 9/8/22.
// Modified by Sherman Yan on 9/14/22
//

#ifndef CS003A_MATCH_FUNCTIONS_H
#define CS003A_MATCH_FUNCTIONS_H

#include <vector>
#include <iostream>
#include <fstream>

void shuffle(std::vector<char> &v);

std::vector<char> getLetters(int size);

void fill(std::vector<std::vector<char>> &v);

std::vector<std::vector<char>> createArray(int row, int col);

void print(std::vector<std::vector<char>> v, std::ostream &outputLocation);

int getInput();

void update(std::vector<std::vector<char>> &front, std::vector<std::vector<char>> &back, int row, int col);

void update(std::vector<std::vector<char>> &back, int row, int col, char value);

bool validBoardSize(int row, int col);

bool validCard(std::vector<std::vector<int>> &cards, const int curCard[], int maxRow, int maxCol);

void generateBoard(std::vector<std::vector<char>> &front, std::vector<std::vector<char>> &back);

void generateBoard(std::vector<std::vector<char>> &front, std::vector<std::vector<char>> &back, std::ifstream &fin);

void getSavedBoardFile(std::ifstream &fin);

bool openFile(std::ofstream &fout, std::string filepath);

bool openFile(std::ifstream &fin, std::string filepath);

void saveGame(std::vector<std::vector<char>> &front, std::vector<std::vector<char>> &back);

#endif //CS003A_MATCH_FUNCTIONS_H
