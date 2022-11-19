//
// Created by Sherman Yan on 10/12/22.
//

#ifndef TEMPLATE_EXAMPLE_BOOTLEGVECTOR_H
#define TEMPLATE_EXAMPLE_BOOTLEGVECTOR_H
#include <iostream>

template <class T>
class bootlegVector {
private:
    T *ptr = nullptr;
    int size, numUsed;

    void resize();
    T *createVector(int size);
    void copy(T *&temp);
    void fillVector(const T& value);

public:

    bootlegVector();
    bootlegVector(int size, const T& def);
    bootlegVector(const bootlegVector<T>& vector);
    ~bootlegVector();

    void push_back(const T& value);

    int length() const;

    T& operator[](unsigned int index);
    const T& operator[](unsigned int index) const;

    template<class S>
    friend bootlegVector<S> operator+(const bootlegVector<S>& lhs, const bootlegVector<S>& rhs);

    template<class S>
    friend bool operator==(const bootlegVector<S>& lhs, const bootlegVector<S>& rhs);


//    void operator=(const bootlegVector<T>& vector);

    bootlegVector& operator=(const bootlegVector<T>& vector);


    };

#include "bootlegVector.cpp"

#endif //TEMPLATE_EXAMPLE_BOOTLEGVECTOR_H
