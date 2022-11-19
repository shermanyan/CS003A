//
// Created by Sherman Yan on 10/4/22.
//

#ifndef PROGRAMMINGPROJECT_5_PP5_FUNCTIONS_H
#define PROGRAMMINGPROJECT_5_PP5_FUNCTIONS_H
#include <iostream>
#include <iomanip>

int** createLabViewer();
int* createArray(int length);
void userLogin(int** labView);
void userLogout(int** labView);
void getUser(int& idNumber, int& labNumber, int& stationNumber);
void printDisplay(int** labView);
void printStationStatus(int* data, int length);
void deleteLabView(int** labView);

#endif //PROGRAMMINGPROJECT_5_PP5_FUNCTIONS_H
