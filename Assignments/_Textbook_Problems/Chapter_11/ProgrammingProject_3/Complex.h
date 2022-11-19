//
// Created by Sherman Yan on 11/2/22.
//

#ifndef CS003A_COMPLEX_H
#define CS003A_COMPLEX_H
#include "cmath"
#include <iostream>

class Complex {

private:
    double real, imaginary;
public:
    Complex();
    Complex(double real, double imaginary);
    Complex(double realPart);

    friend std::istream& operator >>(std::istream& ins, Complex& complex);
    friend std::ostream& operator <<(std::ostream& outs, const Complex& complex);

    friend Complex operator +(const Complex& lhs, const Complex& rhs);
    friend Complex operator -(const Complex& lhs, const Complex& rhs);
    friend Complex operator *(const Complex& lhs, const Complex& rhs);

    friend bool operator == (const Complex& lhs, const Complex& rhs);

};


#endif //CS003A_COMPLEX_H
