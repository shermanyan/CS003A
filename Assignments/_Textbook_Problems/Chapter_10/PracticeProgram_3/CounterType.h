//
// Created by Sherman Yan on 10/26/22.
//

#ifndef CS003A_COUNTERTYPE_H
#define CS003A_COUNTERTYPE_H
#include <iostream>

class CounterType {
private:
    unsigned int counter;
public:
    CounterType();
    CounterType(unsigned int counter);

    void increment() ;
    void decrement() ;
    unsigned int getCounter() const;
    void output(std::ostream& out);

};


#endif //CS003A_COUNTERTYPE_H
