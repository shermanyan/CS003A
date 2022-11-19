//
// Created by Sherman Yan on 11/19/22.
//

#ifndef CS003A_STACK_CPP
#define CS003A_STACK_CPP

#include "Stack.h"

template<class T>
Stack<T>::Stack():List<T>() {
}

template<class T>
Stack<T>::Stack(const Stack &stack) {
    *this = stack;
}

template<class T>
void Stack<T>::push(T item) {
    List<T>::push_front(item);
}

template<class T>
T Stack<T>::pop() {
    return List<T>::pop_front();
}

template<class T>
T Stack<T>::top() {
    return List<T>::front();
}

template<class T>
unsigned int Stack<T>::size() {
    return List<T>::size();
}

template<class T>
bool Stack<T>::isEmpty() {
    return List<T>::empty();
}

#endif