//
// Created by Sherman Yan on 10/31/22.
//
#include "money.h"

int main() {

    money a1, a2(1);

    std::cin >> a1;

    std::cout<< "a1 " << a1;
    std::cout<< "a2 " << a2;

    std::cout << "a1+a2 " << a1 + a2;

    std::cout <<"-a1 " << -a1;

    std::cout << "a2gv: " << a2.getValue() << std::endl;

    std::cout << "= " << (a2 == a1)<< std::endl;
    std::cout << "a1<a2 " << (a1<a2) << std::endl;
    std::cout << "a1<=a2 " << (a1<=a2)<< std::endl;
    std::cout << "a1>=a2 " << (a1>=a2)<< std::endl;

    money per = a1.percent(10);
    std::cout << "per " << per;

    return 0;
}