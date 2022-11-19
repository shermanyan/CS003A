//
// Created by Sherman Yan on 10/4/22.
//

#include <iostream>
#include <cstring>

bool isPalindrome(char* cstr)
{
    char* front = cstr;
    char* back = cstr + strlen(cstr)- 1;
    while (front < back)
    {
        if (*front != *back)
            return false;

        front++;
        back--;
    }
    return true;
}

int main() {
    char s1[50] = "neveroddoreven";
    char s2[50] = "not a palindrome";
    std::cout << isPalindrome(s1) << std::endl; // true
    std::cout << isPalindrome(s2) << std::endl; // false
    return 0;
}