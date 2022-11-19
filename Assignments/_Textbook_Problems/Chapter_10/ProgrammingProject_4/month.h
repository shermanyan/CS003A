//
// Created by Sherman Yan on 10/26/22.
//

#ifndef CS003A_MONTH_H
#define CS003A_MONTH_H
#include <iostream>
#include <cassert>

class month {
private:
    static std::string months[];
    char first, second, third;

    void setMonth(int month);
    void setMonth(const std::string& month);
    int getMonth(const std::string& month) const;
    std::string getMonth(int month) const;

public:
    month();
    month(const std::string& month);
    month(int month);

    void inputNum(std::istream& in);
    void inputName(std::istream& in);

    void outputNum(std::ostream& out)const;
    void outputName(std::ostream& out) const;

    month nextMonth();


};


#endif //CS003A_MONTH_H
