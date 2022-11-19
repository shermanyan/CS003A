//
// Created by Sherman Yan on 10/5/22.
//
#include "car.h"

int main(){
    car c;
    car bmw = {"BMW", "325i"};

    bmw.setPrice(250);
    bmw.setColor("Black");
    c.print();
    std::cout<< std::endl;

    bmw.print();
    std::cout << bmw.getModel();

}