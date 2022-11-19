//
// Created by Sherman Yan on 11/1/22.
//
#include "Complex.h"
int main(){

    const Complex i(0,1);

    Complex num , num2(1) , num3 (3,5);

    std::cin >> num;

    std::cout << "num: " << num << std::endl;
    std::cout << "num2: " << num2 << std::endl;
    std::cout << "num3: " << num3 << std::endl;

    std::cout << "num2+num3: "<< num2+num3 << std::endl;

    std::cout << "num3-num: "<< num3-num << std::endl;

    std::cout << "num == num2: "<< (num == num2) << std::endl;

    std::cout << "num2 * num3: " << num2 * num3 << std::endl;

    return 0;
}