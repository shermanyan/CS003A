//
// Created by Sherman Yan on 9/29/22.
//

#include "struct_functions.h"

Coordinate midpoint(Coordinate pt1, Coordinate pt2){

    Coordinate mid;

    mid.x = pt1.x + pt2.x * 0.5;
    mid.y = pt1.y + pt2.y * 0.5;

    return mid;
}

void print(Coordinate coordinate){
    std::cout << "(" << coordinate.x << "," << coordinate.y << ")";
}


void print(customer name){

    int textWidth = 30;
    std::cout.setf(std::ios::left);
    std::cout << std::setw(textWidth) << "Student Name: " << name.firstName + " " + name.middleInitial + " " + name.lastname << std::endl;
    std::cout << std::setw(textWidth) << "Student Age: " << name.age << std::endl;
    std::cout << std::setw(textWidth) << "Student Book Balance: " << name.bookBalance << std::endl;

}
customer createCustomerProfile(std::string firstName, std::string lastName, char middleInitial, int age, double bookBalance){
    customer person;
    person.firstName = firstName;
    person.lastname = lastName;
    person.middleInitial = toupper(middleInitial);
    person.age = age;
    person.bookBalance = bookBalance;

    return person;
}
