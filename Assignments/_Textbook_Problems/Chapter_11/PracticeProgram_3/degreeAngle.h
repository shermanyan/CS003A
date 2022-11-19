//
// Created by Sherman Yan on 10/24/22.
//

#ifndef CS003A_DEGREEANGLE_H
#define CS003A_DEGREEANGLE_H
#include <iostream>
#include <cassert>
class degreeAngle {

private:
    int angle;
    bool checkBoundary();
public:
    degreeAngle();
    degreeAngle(int angle);
    friend degreeAngle operator+(const degreeAngle& lhs, const degreeAngle& rhs);
    friend degreeAngle operator-(const degreeAngle& lhs, const degreeAngle& rhs);
    friend std::ostream& operator<<(std::ostream& out, const degreeAngle& angle);
    friend std::istream& operator>>(std::istream& in, degreeAngle& angle);
};


#endif //CS003A_DEGREEANGLE_H
