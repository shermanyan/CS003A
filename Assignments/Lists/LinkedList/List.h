//
// Created by Sherman Yan on 11/2/22.
//

#ifndef CS003A_LIST_H
#define CS003A_LIST_H
#include <iostream>
#include "Node.h"

template<class T>
class List {
private:
    static const unsigned int MAX_SIZE = 100;
    Node<T> *head = nullptr;
    Node<T> *tail = nullptr;

    Node<T>* search(T item);
    Node<T>* previous(T item);

    Node<T>* createNode(T item);
    void addFirstNode(T item);

public:
    List();
    List(const List& list);
    ~List();


    void push_front(T item);
    void push_back(T item);
    T& front();
    const T& front() const;

    T pop_back();
    T pop_front();

    int size() const;
    bool empty();

    void insertBefore(T item, T before);
    void insertAfter(T item, T after);

    void remove(T item);

    List<T>& operator= (const List<T>& list);

    void operator +=(T item);

    template<class S>
    friend std::ostream& operator <<(std::ostream& outs , const List<S>& list);

    template<class S>
    friend std::istream& operator >>(std::istream& ins , List<S>& list);

//    virtual std::ostream& print(std::ostream& out) const;
};

#include "List.cpp"

#endif //CS003A_LIST_H
