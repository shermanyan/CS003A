//
// Created by Sherman Yan on 10/5/22.
//

#ifndef CLASS_EXAMPLE_CARLOT_H
#define CLASS_EXAMPLE_CARLOT_H
#include <vector>
#include "car.h"

class carLot {

public:
    std::vector<car> cars;
private:
    int size() const;
    void addCar(const car& car);
    void addCar(const std::string& make, const std::string& model);
    void updateCar();
    const car lookupCar(const std::string& plate)const;
    car lookupCar(const std::string& plate);

};


#endif //CLASS_EXAMPLE_CARLOT_H
