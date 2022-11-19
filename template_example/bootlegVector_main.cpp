#include <iostream>
#include "bootlegVector.h"
//#include "A.h"

void f(bootlegVector<int> v);
int main() {
    
//    bootlegVector<int> v,v1;
//
//    if (v == v1){
//       std::cout<< " hi";
//    }
//
//    std::cout << (v == v1);
    bootlegVector<int> v;
    bootlegVector<int> v2 = v;


//    f(v);


    for (int i = 0; i < 10; i++)
        v.push_back(i);
    for (int i = 10; i < 20; i++)
        v2.push_back(i);

    v2 = v;
    bootlegVector<int> v3(v2);

    for (int i = 0; i < v3.length(); ++i) {
        v3[i] = 0;
    }
    std::cout << std::endl;

    for (int i = 0; i < v.length(); ++i) {
//        v[i] = 0;
        std::cout << v[i] << " ";
    }
    std::cout << std::endl;
    for (int i = 0; i < v2.length(); ++i) {
        std::cout << v2[i] << " ";
    }
    std::cout << std::endl;
    for (int i = 0; i < v3.length(); ++i) {
        std::cout << v3[i] << " ";
    }
    std::cout << std::endl;


    return 0;
}

void f(bootlegVector<int> v){

}