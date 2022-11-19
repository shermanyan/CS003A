//
// Created by Sherman Yan on 11/2/22.
//
#include "Complex.h"

Complex::Complex():Complex(0,0){}

Complex::Complex(double real, double imaginary):real(real), imaginary(imaginary) {}

Complex::Complex(double realPart) :Complex(realPart,0){}

std::istream& operator >>(std::istream& ins, Complex& complex){
    char ch;
    ins>> complex.real >> ch >> complex.imaginary;
    return ins;
}

std::ostream& operator <<(std::ostream& outs, const Complex& complex){

    outs << complex.real << "+" << complex.imaginary << "*i" ;
    return outs;
}

Complex operator +(const Complex& lhs, const Complex& rhs){
    return {(lhs.real + rhs.real),(lhs.imaginary + rhs.imaginary)};
}

Complex operator -(const Complex& lhs, const Complex& rhs){
    return {(lhs.real - rhs.real),(lhs.imaginary - rhs.imaginary)};
}

Complex operator *(const Complex& lhs, const Complex& rhs){
    return{(lhs.real *rhs.real) -(lhs.imaginary * rhs.imaginary),
           (lhs.real *rhs.real) + (lhs.imaginary * rhs.imaginary)};
}

bool operator == (const Complex& lhs, const Complex& rhs){
    return (lhs.real == rhs.real && lhs.imaginary == rhs.imaginary);
}




