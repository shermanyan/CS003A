//
// Created by Sherman Yan on 11/1/22.
//

#ifndef CS003A_VECTORDOUBLE_H
#define CS003A_VECTORDOUBLE_H
#include <cassert>
#include <iostream>

class VectorDouble {

private:
    double* doubles = nullptr;
    int maxCount, count;

    void resize();
    void copy(double *&temp);
    void createVector(int elements);
    void fillVector(double value);

public:
    VectorDouble();
    VectorDouble(int numElements);
    VectorDouble(const VectorDouble& vector);
    ~VectorDouble();

    int size() const;

    void push_back(double value);

    void reserve(int num);

    VectorDouble& operator =(const VectorDouble& vector);

    friend bool operator ==(const VectorDouble& lhs, const VectorDouble& rhs);
    double operator[](unsigned int index)const;



};


#endif //CS003A_VECTORDOUBLE_H
