//
// Created by Sherman Yan on 10/13/22.
//
#include "month.h"

int main(){

    month m;

    m.inputNum(std::cin);
    m.outputName(std::cout);
    m.outputNum(std::cout);

    m.inputName(std::cin);
    m.outputName(std::cout);
    m.outputNum(std::cout);

    month nM = m.nextMonth();
    std::cout << "Next Month: ";
    nM.outputName(std::cout);
    nM.outputNum(std::cout);


    return 0;

}
