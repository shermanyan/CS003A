//
// Created by Sherman Yan on 10/26/22.
//
#include "CounterType.h"
int main(){

    CounterType counter;

    counter.output(std::cout);

    for (int i = 0; i < 10; ++i) {
        counter.increment();
    }

    counter.output(std::cout);

    for (int i = 0; i < 3; ++i) {
        counter.decrement();
    }
    counter.output(std::cout);
    std::cout << "Count Amt: " << counter.getCounter();

    return 0;
}