//
// Created by Sherman Yan on 10/4/22.
//

#include "car.h"


car::car(): car("Ford","Pinto","Rust","21345", 1978,10000){
}

car::car(double price): car("Ford","Pinto","Rust","21345",1978,price){

}
car::car(const std::string& make, const std::string& model): car(make, model,"Rust", "21345", 1978, 10000){

}
car::car(const std::string& make, const std::string& model, const std::string& color, const std::string& plate, int year, double price)
: make(make), model(model), color(color),plate(plate), year(year), price(price)
{

}

std::string car::getMake() const {
    return make;
}
void car::setMake(const std::string& make){
    this->make = make;
}

std::string car::getModel() const{
    return model;
}
void car::setModel(const std::string& model){
    this->model = model;
}

std::string car::getColor() const{
    return color;
}
void car::setColor(const std::string& color){
    this->color = color;
}

int car::getYear() const{
    return year;
}
void car::setYear(int year){
    this->year = year;
}

double car::getPrice() const{
    return price;
}
void car::setPrice(int price){
    this->price = price;
}

void car::print(){
    std::cout << "Make: " << make << std::endl;
    std::cout << "Model: " << model << std::endl;
    std::cout << "Color: " << color << std::endl;
    std::cout << "Year: " << year << std::endl;
    std::cout << "Price: " << price << std::endl;

}