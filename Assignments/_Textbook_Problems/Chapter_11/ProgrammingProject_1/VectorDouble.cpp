//
// Created by Sherman Yan on 11/1/22.
//

#include "VectorDouble.h"

VectorDouble::VectorDouble():VectorDouble(50) {}

VectorDouble::VectorDouble(int numElements):count(0){
    createVector(numElements);
    fillVector(0);
}

VectorDouble::VectorDouble(const VectorDouble &vector) {
    std::cout << "Copy Constructor called.\n";
    *this = vector;
}

VectorDouble::~VectorDouble() {
    std::cout << "Destructor called.\n";
    delete[] doubles;
    doubles = nullptr;
}

void VectorDouble::resize() {
    VectorDouble temp(maxCount * 2);
    copy(temp.doubles);
    temp.count = count;
    this->~VectorDouble();
    *this = temp;
    temp.~VectorDouble();
}

void VectorDouble::copy(double *&temp) {
    for (int i = 0; i < maxCount; ++i) {
        *(temp+i) = *(doubles + i);
    }
}

void VectorDouble::createVector(int elements) {
    doubles = new double[elements];
    maxCount = elements;
}

void VectorDouble::fillVector(double value) {
    for (int i = 0; i < maxCount; ++i) {
        *(doubles + i) = value;
    }
}

int VectorDouble::size() const {
    return count;
}

void VectorDouble::push_back(double value) {

    if(count == maxCount){
        resize();
        std::cout << "r";
    }
    *(doubles + count++) = value;
}

void VectorDouble::reserve(int num) {

    VectorDouble temp(num);
    copy(temp.doubles);
    this->~VectorDouble();
    *this = temp;
    temp.~VectorDouble();
}

VectorDouble& VectorDouble::operator=(const VectorDouble &vector) {
    std::cout << "Assignment Op called." << std::endl;
    if(&vector == this)
        return *this;

    this->~VectorDouble();

    createVector(vector.maxCount);
    for(int i = 0; i< vector.count; i++)
        push_back( vector[i]);

    return *this;
}

double VectorDouble::operator[](unsigned int index)const {
    return *(doubles +index);
}

bool operator==(const VectorDouble &lhs, const VectorDouble &rhs) {

    if(lhs.size() != rhs.size())
        return false;

    for (int i = 0; i<lhs.size(); i++){
        if(rhs[i] != lhs[i])
            return false;
    }
    return true;
}





