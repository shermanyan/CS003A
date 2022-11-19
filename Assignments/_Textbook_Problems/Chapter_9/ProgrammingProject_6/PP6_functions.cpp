//
// Created by Sherman Yan on 10/4/22.
//

#include "PP6_functions.h"

std::string* addEntry(std::string *dynamicArray, int &size, std::string newEntry){


    std::string* newArray = new std::string[size+1];

    for(int i = 0; i <size; i++)
        *(newArray + i) = *(dynamicArray + i);

    *(newArray + size) = newEntry;

    size++;

    delete[] dynamicArray;

    return newArray;

}
std::string* deleteEntry(std::string *dynamicArray, int &size, std::string entryToDelete) {

    for (int i = 0; i < size; i++)
        if (*(dynamicArray + i) == entryToDelete){
            std::string* newArray = new std::string[size--];
            int newSize = 0;
            for(int j = 0; j <size + 1;j ++){
                if( i != j){
                    *(newArray + newSize++ ) = *(dynamicArray + j);
                }
            }
            delete[] dynamicArray;
            return newArray;
    }
    return dynamicArray;
}



void printArray(int size, const std::string *array) {
    for(int i = 0; i < size; i++){
        std::cout << *(array + i) << " ";
    }
    std::cout<< std::endl;
}

