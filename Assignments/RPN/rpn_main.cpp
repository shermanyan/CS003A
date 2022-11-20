//
// Created by Sherman Yan on 11/19/22.
//
#include <string>
#include "RPN.h"
int main(){

    std::string infix = "(((A+((B*C)/D))-F)+(A^E))";
    std::string postfix = "ABC*D/+F-AE^+";

    std::cout << infix << " -> " << RPNConverter::toPostfix(infix) << std::endl;
    std::cout << postfix << " -> " << RPNConverter::toInfix(postfix) << std::endl;

    return 0;
}
