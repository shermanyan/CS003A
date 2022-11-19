//
// Created by Sherman Yan on 10/31/22.
//

#include "pairs.h"

int main(){

    pairs p1, p2;
    std::cout << "p1: ";
    std::cin >> p1 ;
    std::cout << "p2: ";
    std::cin >> p2 ;

    std::cout << "p1: " << p1 << std::endl;
    std::cout << "p2: " << p2 << std::endl;

    std::cout << "p1+p2: " << p1+p2 << std::endl;
    std::cout << "p2-p1: " << p2-p1 << std::endl;
    std::cout << "p2*2: " << p2*2 << std::endl;

    return 0;
}
