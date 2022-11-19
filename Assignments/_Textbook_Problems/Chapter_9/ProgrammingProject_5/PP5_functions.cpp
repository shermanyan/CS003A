//
// Created by Sherman Yan on 10/4/22.
//

#include "PP5_functions.h"

int** createLabViewer(){

    int** labView = new int*[4];

    labView[0] = createArray(5);
    labView[1] = createArray(6);
    labView[2] = createArray(4);
    labView[3] = createArray(3);

    return labView;
}

int* createArray(int length){
    int* arr = new int[5];
    for(int i =0; i<length; i++){
        *(arr + i) = 0;
    }
    return arr;
}

void userLogin(int** labView){

    int idNumber = 0;
    int labNumber = 0;
    int stationNumber = 0;
    getUser(idNumber, labNumber,stationNumber);

    *(*(labView + labNumber - 1)+(stationNumber-1)) = idNumber;

    std::cout << "Login Completed!\n";

}

void userLogout(int** labView){
    int idNumber = 0;
    int labNumber = 0;
    int stationNumber = 0;
    getUser(idNumber, labNumber,stationNumber);
    int* user = (*(labView + labNumber - 1)+(stationNumber-1));
    if (*user == idNumber) {
        *user = 0;
        std::cout << "Logout Completed!\n";
    }
    else
        std::cout<< "Logout Failed\n";

}

void getUser(int& idNumber, int& labNumber, int& stationNumber){

    while(!idNumber) {
        std::cout << "Enter your 5 digit ID number: ";
        std::cin >> idNumber;
        if (std::to_string(idNumber).length() != 5) {
            std::cout << "Invalid, try again.\n";
            idNumber = 0;
        }
    }
    while(!labNumber) {
        std::cout << "Enter Lab number: ";
        std::cin >> labNumber;
        switch (labNumber) {
            case 1:
            case 2:
            case 3:
            case 4:
                break;
            default:
                std::cout << "Invalid, try again.\n";
                labNumber = 0;
        }
    }
    while(!stationNumber) {
        std::cout << "Enter your station number: ";
        std::cin >> stationNumber;
        switch (labNumber) {
            case 1:
                if(stationNumber > 5 || stationNumber < 1){
                    std::cout << "Invalid, try again.\n";
                    stationNumber = 0;
                }
            case 2:
                if(stationNumber > 6 || stationNumber < 1) {
                    std::cout << "Invalid, try again.\n";
                    stationNumber = 0;
                }
            case 3:
                if(stationNumber > 4 || stationNumber < 1){
                    std::cout << "Invalid, try again.\n";
                    stationNumber = 0;
                }
            case 4:
                if(stationNumber > 3 || stationNumber < 1) {
                    std::cout << "Invalid, try again.\n";
                    stationNumber = 0;
                }
            default:
                break;
        }
    }

}

void printDisplay(int** labView){

    std::cout.setf(std::ios::left);
    std::cout << std::setw(8) << "Lab Num" << "Computer Stations" << std::endl;
    std::cout << std::setw(8) << 1 ;
    printStationStatus(labView[0],5);
    std::cout << std::setw(8) << 2 ;
    printStationStatus(labView[1],6);
    std::cout << std::setw(8) << 3 ;
    printStationStatus(labView[2],4);
    std::cout << std::setw(8) << 4 ;
    printStationStatus(labView[3],3);

}

void printStationStatus(int* data, int length){
    for(int i = 0; i < length; i++){
        int id = *(data + i);
        std::cout << i + 1 << ": ";
        if (!id)
            std::cout << "empty ";
        else
            std::cout << id << " ";
    }
    std::cout << std::endl;
}

void deleteLabView(int** labView){

    for(int i = 0 ;i < 4; i++)
        delete labView[i];

    delete[] labView;

}
