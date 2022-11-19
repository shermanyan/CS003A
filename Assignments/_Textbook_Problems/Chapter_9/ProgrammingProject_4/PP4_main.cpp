//
// Created by Sherman Yan on 10/4/22.
//

#include <iostream>
#include "PP4_functions.h"

int main(){

    char cstr1[10] = "abcd";
    char cstr2[10] = "aabcc";
    char cstr3[15] = "hello world";

    reverse(cstr1);
    reverse(cstr2);
    reverse(cstr3);
    std::cout << cstr1 << std::endl;
    std::cout << cstr2 << std::endl;
    std::cout << cstr3 << std::endl;

    return 0;
}
