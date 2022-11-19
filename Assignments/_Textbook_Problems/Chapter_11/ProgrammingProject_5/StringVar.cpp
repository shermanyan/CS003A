//
// Created by Ryan Wong on 2/23/2022.
//

#include "StringVar.h"

StringVar::StringVar(int size):maxLength(size){

    value = new char[maxLength + 1];
    value[0] = '\0';
}

StringVar::StringVar():maxLength(100){

    value = new char[maxLength + 1];
    value[0] = '\0';
}

StringVar::StringVar(const char a[]):maxLength(strlen(a)){

    value = new char[maxLength + 1];
    strcpy(value,a);
}

StringVar::StringVar(const StringVar& stringObject):maxLength(stringObject.length()){

    value = new char[maxLength + 1];
    strcpy(value, stringObject.value);
}

StringVar::~StringVar(){

    delete[] value;
}

int StringVar::length()const{

    return strlen(value);
}


void StringVar::inputLine(std::istream& ins){

    ins.getline(value, maxLength + 1);
}

std::ostream& operator<< (std::ostream& outs, const StringVar& theString){

    outs << theString.value;
    return outs;
}

void StringVar::setValue(char value[]){

    this->value = value;
}

char* StringVar::getValue(){

    return value;
}