//
// Created by Sherman Yan on 11/19/22.
//

#ifndef CS003A_RPN_H
#define CS003A_RPN_H
#include "/Users/shermanyan/CLionProjects/CS003A/Assignments/Lists/Stacks/Stack.h"
#include <string>

class RPNConverter {

private:
    static const char ops[];
    static int getPrecedence(char op);

public:
    static std::string toPostfix(const std::string& infix);
    static std::string toInfix(const std::string& postfix);

};


#endif //CS003A_RPN_H
