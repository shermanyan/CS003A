//
// Created by Sherman Yan on 11/19/22.
//

#ifndef CS003A_STACK_H
#define CS003A_STACK_H
#include "/Users/shermanyan/CLionProjects/CS003A/Assignments/Lists/LinkedList/List.h"

template <class T>
class Stack: public List<T>{
private:
public:
    Stack();
    Stack(const Stack& stack);

    void push(T item);
    T pop();
    T top();

    unsigned int size();
    bool isEmpty();


};

#include "Stack.cpp"

#endif //CS003A_STACK_H
