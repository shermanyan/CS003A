//
// Created by Dave R. Smith on 9/28/22.
//

#ifndef TEMPLATE_EXAMPLE_BOOTLEGVECTOR_CPP
#define TEMPLATE_EXAMPLE_BOOTLEGVECTOR_CPP

#include "bootlegVector.h"
template<class T>
bootlegVector<T>::bootlegVector(): bootlegVector(1, 0){
}

template<class T>
bootlegVector<T>::bootlegVector(int size, const T& def) : size(size), numUsed(size) {
    ptr = createVector(size);
    fillVector(def);
}

template<class T>
bootlegVector<T>::bootlegVector(const bootlegVector<T>& vector){
    std::cout << "Copy Constructor called.\n";
    *this = vector;
}

template<class T>
bootlegVector<T>::~bootlegVector<T>(){
    std::cout << "Destructor called.\n";
    delete[] ptr;
    ptr = nullptr;
}

template<class T>
void bootlegVector<T>::push_back(const T& value) {
    if (numUsed == size)
        resize();
    *(ptr + numUsed++) = value;
}

template<class T>
void bootlegVector<T>::fillVector(const T& value){
    for(int i = 0 ; i<size ;i++){
        *(ptr + i) = value;
    }
    numUsed = size;
}

template<class T>
void bootlegVector<T>::resize() {
    T* temp = new T[size *2];
    copy(temp);
    delete[] ptr;
    ptr = temp;
    size *= 2;
}

template<class T>
T* bootlegVector<T>::createVector(int size) {
    T *p = new T[size];
    return p;
}

template<class T>
void bootlegVector<T>::copy(T *&temp) {
    for (int i = 0; i < size; i++)
        *(temp + i) = *(ptr + i);
}

template<class T>
int bootlegVector<T>::length()const {
    return numUsed;
}

template<class T>
T& bootlegVector<T>::operator[](unsigned int index){

   return *(ptr + index);
}

template<class T>
const T& bootlegVector<T>::operator[](unsigned int index)const{

    return *(ptr + index);
}

template <class T>
bootlegVector<T> operator+(const bootlegVector<T>& lhs, const bootlegVector<T>& rhs){
    bootlegVector<T> v;
    for (int i = 0; i < lhs.length(); ++i)
    {
        v.push_back(lhs[i]);
    }
    for (int i = 0; i < rhs.length(); ++i)
    {
        v.push_back(rhs[i]);
    }
    return v;
}

template<class T>
bootlegVector<T>& bootlegVector<T>::operator=(const bootlegVector<T>& vector){

    std::cout << "Assignment operator called.\n";
    if(&vector == this)
        return *this;

    this->~bootlegVector();

    size = vector.length(), numUsed = 0;
    ptr = new T[size];
    for (int i = 0; i < vector.length(); ++i) {
        push_back(vector[i]);
    }
    return *this;

}

template <class S>
bool operator==(const bootlegVector<S>& lhs, const bootlegVector<S>& rhs){

    if(lhs.size != rhs.size)
        return false;

    for (int i = 0; i<lhs.size; i++){
        if(rhs[i] != lhs[i])
            return false;
    }
    return true;
}


#endif //TEMPLATE_EXAMPLE_BOOTLEGVECTOR_CPP


