//
// Created by Sherman Yan on 10/26/22.
//

#include "CounterType.h"

CounterType::CounterType() : CounterType(0){}

CounterType::CounterType(unsigned int counter) : counter(counter) {}

unsigned int CounterType::getCounter() const {
    return counter;
}

void CounterType::increment() {
    counter ++;
}

void CounterType::decrement() {
    if( counter > 0)
        counter--;
    else
        std::cout << "Invalid";
}

void CounterType::output(std::ostream& out) {

    out << "Counter: " << counter << std::endl;
}


