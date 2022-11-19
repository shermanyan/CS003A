//
// Created by Sherman Yan on 11/1/22.
//
#include "VectorDouble.h"

int main(){

//    VectorDouble vec, vec2;
//
//    for (int i = 0; i < 10; i ++) {
//        vec.push_back(i);
//    }
//
//    std::cout << "vec: ";
//    for (int i = 0; i < vec.size(); ++i) {
//        std::cout << vec[i] << " ";
//    }
//    std::cout << std::endl;
//
//    std::cout << "vec == vec2: " << (vec == vec2) << std::endl;
//
//    vec2 = vec;
//
//    std::cout << "vec2: ";
//    for (int i = 0; i < vec2.size(); ++i) {
//        std::cout << vec2[i] << " ";
//    }
//    std::cout << std::endl;
//
//    std::cout << "vec == vec2: " << (vec == vec2) << std::endl;
////
//
//    for (int i = 9; i < 20; i ++) {
//        vec2.push_back(i);
//    }
//
//    std::cout << "vec2: ";
//    for (int i = 0; i < vec2.size(); ++i) {
//        std::cout << vec2[i] << " ";
//    }
//    std::cout << std::endl;
//
//    VectorDouble vec3(vec2);
//
//    std::cout << "vec3: ";
//    for (int i = 0; i < vec3.size(); ++i) {
//        std::cout << vec3[i] << " ";
//    }
//    std::cout << std::endl;
//
//    std::cout << "vec3 == vec2: " << (vec3 == vec2) << std::endl;

    VectorDouble vec4;

    vec4.reserve(1);

    vec4.push_back(1);
    vec4.push_back(2);

    std::cout << vec4[0];
    std::cout << vec4[1];
    std::cout << vec4[2];

    return 0;
}