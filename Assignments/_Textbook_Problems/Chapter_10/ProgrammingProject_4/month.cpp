//
// Created by Sherman Yan on 10/26/22.
//

#include "month.h"

std::string month::months[] = {"JAN", "FEB", "MAR", "APR", "MAY", "JUN",
                               "JUL", "AUG", "SEP", "OCT", "NOV", "DEC"};

month::month(): month(1){
}

month::month(const std::string& month) {
    setMonth(month);
}

month::month(int month){

    setMonth(month);
}

void month::inputNum(std::istream &in) {

    int month;
    std::cout << "Enter month (int): ";
    in >> month;

    setMonth(month);
}

void month::inputName(std::istream &in) {

    std::string month;
    std::cout << "Enter month (str): ";
    in >> month;

    std::transform(month.begin(), month.end(),month.begin(), ::toupper);

    setMonth(month);
}

void month::outputNum(std::ostream &out) const {

    std::string month;
    month += first;
    month += second;
    month += third;
    out << "Month: " << getMonth(month) << std::endl;
}

void month::outputName(std::ostream &out) const {
    out << "Month: " << first << second << third << std::endl;
}

month month::nextMonth() {

    std::string curMon;
    curMon += first;
    curMon += second;
    curMon += third;

    return {getMonth(curMon) + 1};
}

void month::setMonth(int month) {

    assert(month > 0 && month < 12);

    first = months[month-1][0];
    second = months[month-1][1];
    third = months[month-1][2];
}

void month::setMonth(const std::string& month) {

    assert(month.length() == 3);

    for(int i = 0; i<months->length(); i++){
        if(months[i] == month) {
            first = months[i][0];
            second = months[i][1];
            third = months[i][2];
            break;
        }
        assert(i = months->length() && "Invalid month");
    }
}

int month::getMonth(const std::string &month) const {

    for(int i = 0; i<12; i++) {
        if (months[i] == month) {
            return i + 1;
        }
    }
}

std::string month::getMonth(int month) const {

    return months[month];
}