//
// Created by Sherman Yan on 10/4/22.
//
#include "PP6_functions.h"


int main(){

    int size = 5;
    std::string* array = new std::string[size];

    *array = "Joseph";
    *(array + 1) = "Jason";
    *(array + 2) = "Jeffery";
    *(array + 3) = "Jackson";
    *(array + 4) = "Jerad";

    printArray(size, array);

    array = addEntry(array,size,"Berna");
    printArray(size, array);

    array = addEntry(array,size,"Johna");
    printArray(size, array);

    array = addEntry(array,size,"Serena");
    printArray(size, array);


    array = deleteEntry(array,size,"Jason");
    printArray(size, array);


    return 0;

}

