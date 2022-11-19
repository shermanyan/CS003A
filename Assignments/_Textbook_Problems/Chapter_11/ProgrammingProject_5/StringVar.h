//
// Created by Ryan Wong on 2/23/2022.
//

#ifndef CHAPTER_11_PROGRAMMING_PROJECTS_STRINGVAR_H
#define CHAPTER_11_PROGRAMMING_PROJECTS_STRINGVAR_H

#include <iostream>
#include <cstring>
#include <cstdlib>
#include <cstddef>

class StringVar {

public:
    StringVar(int size);

    StringVar();

    StringVar(const char a[]);

    StringVar(const StringVar& stringObject);

    ~StringVar();

    int length()const;

    void inputLine(std::istream& ins);

    friend std::ostream& operator<< (std::ostream& outs, const StringVar& theString);

    void setValue(char value[]);
    char* getValue();
private:

    char *value;
    int maxLength;

};


#endif //CHAPTER_11_PROGRAMMING_PROJECTS_STRINGVAR_H
