//
// Created by Sherman Yan on 10/4/22.
//

#include <iostream>

void addOne(int *ptrNum) {
    (*ptrNum)++;
}

int main(){
    int var = 0;
    int* ptr = &var;
    addOne(ptr);
    std::cout << var;

    return 0;
}