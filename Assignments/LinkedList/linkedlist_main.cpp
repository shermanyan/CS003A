//
// Created by Sherman Yan on 11/2/22.
//
#include <iostream>
#include "List.h"
int main(){

    List<int> list;

    std::cout << "size: " << list.size() << std::endl;
    std::cout << "empty: " << list.empty() << std::endl;

    for (int i = 0; i < 10; ++i) {
        list.push_back(2*i + 1);
    }

//    list.push_front(0);
//    std::cout << "size: " << list.size() << std::endl;
//    std::cout << "list: " << list << std::endl;
//
    std::cout << "size: " << list.size() << std::endl;
    std::cout << "list: " << list << std::endl;

    list.insertAfter(20,1);
    std::cout << "size: " << list.size() << std::endl;
    std::cout << "list: " << list << std::endl;

    list.insertBefore(4,1);
    std::cout << "size: " << list.size() << std::endl;
    std::cout << "list: " << list << std::endl;

//
//    list.pop_back();
//    std::cout << "size: " << list.size() << std::endl;
//    std::cout << "list: " << list << std::endl;
//
//    list.pop_front();
//    std::cout << "size: " << list.size() << std::endl;
//    std::cout << "list: " << list << std::endl;
//
//    list.remove(5);
//    std::cout << "size: " << list.size() << std::endl;
//    std::cout << "list: " << list << std::endl;
//



//    std::cout << "front: " << list.front() << std::endl;
//    std::cout << "empty: " << list.empty() << std::endl;


//
}

