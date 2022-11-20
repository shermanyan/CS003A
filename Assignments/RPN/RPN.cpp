//
// Created by Sherman Yan on 11/19/22.
//

#include "RPN.h"

const char RPNConverter::ops[] = {'-','+','/','*','^'};


int RPNConverter::getPrecedence(char op) {
    switch (op) {
        case '-':
        case '+':
            return 1;
        case'/':
        case'*':
            return 2;
        case'^':
            return 3;
        default:
            return 0;
    }
}

std::string RPNConverter::toPostfix(const std::string &infix) {

    Stack<char> stack;

    std::string postfix;

    for (char c: infix) {

        if(isalpha(c)|| isdigit(c))
            postfix += c;
        else if (c == '(')
            stack.push(c);
        else if (c == ')') {
            while (stack.top() != '(')
                postfix += stack.pop();
            stack.pop();
        }
        else {
            while (!stack.empty() && getPrecedence(stack.top()) >= getPrecedence(c))
                postfix += stack.pop();
            stack.push(c);
        }

    }
    while(!stack.empty())
        postfix += stack.pop();

    return postfix;
}

std::string RPNConverter::toInfix(const std::string &postfix) {
    Stack<std::string> infix;

    for (char c: postfix) {
        if (!getPrecedence(c)) {
            infix.push(std::string(1, c));
        }
        else {
            std::string temp, a = infix.pop(), b = infix.pop();
            temp.append("(");
            temp.append(b);
            temp.append(std::string(1, c));
            temp.append(a);
            temp.append(")");
            infix.push(temp);
        }
    }

    return infix.top();
}

