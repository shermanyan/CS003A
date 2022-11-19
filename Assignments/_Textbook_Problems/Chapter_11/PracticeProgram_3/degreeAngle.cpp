//
// Created by Sherman Yan on 10/24/22.
//

#include "degreeAngle.h"

degreeAngle::degreeAngle(): degreeAngle(0){

}
degreeAngle::degreeAngle(int angle): angle(angle >= 360 ? (angle % 360): angle) {
//    assert(checkBoundary() && "Out of bound");

//    if (angle >= 360)
//        angle %= 360;
}

bool degreeAngle::checkBoundary() {

}

degreeAngle operator+(const degreeAngle &lhs, const degreeAngle &rhs) {
    return degreeAngle((lhs.angle + rhs.angle) % 360);
}

degreeAngle operator-(const degreeAngle &lhs, const degreeAngle &rhs) {
    return degreeAngle((lhs.angle - rhs.angle) % 360);
}

std::ostream &operator<<(std::ostream &out, const degreeAngle &angle) {
    return out << angle.angle;
}

std::istream &operator>>(std::istream &in, degreeAngle &angle) {
    return in >> angle.angle;
}
