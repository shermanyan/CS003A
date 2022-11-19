//
// Created by Sherman Yan on 10/5/22.
//

#include "carLot.h"

int carLot::size() const{
    return cars.size();
}
void carLot::addCar(const car& car) {

    cars.push_back(car);
}
void carLot::addCar(const std::string& make, const std::string& model){

    cars.emplace_back(make,model);
}
void carLot::updateCar(){

}
const car carLot::lookupCar(const std::string& plate)const{

}
car carLot::lookupCar(const std::string& plate){

}