//
// Created by Sherman Yan on 10/4/22.
//

#include "PP4_functions.h"

void reverse(char* cstr){

    char* beg = cstr;
    char* end = cstr + strlen(cstr) - 1;

    while(beg < end){

        char temp = *beg;

        *beg = *end;
        *end = temp;

        beg++;
        end--;
    }

}