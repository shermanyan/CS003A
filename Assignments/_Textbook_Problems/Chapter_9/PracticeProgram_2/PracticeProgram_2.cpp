//
// Created by Sherman Yan on 10/4/22.
//

#include <iostream>

int main(){

    int numDoubles;
    double next;
    double total = 0;

    std::cout << "Please enter an integer: ";
    std::cin >> numDoubles;

    double* doublesArray = new double[numDoubles];

    for(int i = 0; i < numDoubles; i++){
        std::cout << "Please enter a double: ";
        std::cin >> next;

        *(doublesArray + i) = next;

    }

    for(int i = 0; i < numDoubles; i++){
        total += *(doublesArray + i);
    }

    std::cout << "Average: " << total/numDoubles;

    delete[] doublesArray;

    return 0;
}