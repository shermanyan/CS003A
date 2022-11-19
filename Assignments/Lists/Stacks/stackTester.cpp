//
// Created by Sherman Yan on 11/19/22.
//
#include "Stack.h"

int main(){
    Stack<int> stack;

    for (int i = 1; i < 11; ++i) {
        stack.push(i);
    }

    std::cout << stack << std::endl;

    while(!stack.isEmpty())
        std::cout <<stack.pop() << "\n";

    stack.push(21);


    std::cout << stack << std::endl;

    return 0;

}