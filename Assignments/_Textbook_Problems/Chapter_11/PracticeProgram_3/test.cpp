//
// Created by Sherman Yan on 10/24/22.
//

#include "test.h"

void degreeAngleDriver() {

    char response, choice;
    degreeAngle a,b;

    do{

        std::cout << "Enter first degree: ";
        std::cin >> a;
        std::cout << "Enter second degree: ";
        std::cin >> b;

        std::cout << "Add(+) or Subtract(-): ";
        std::cin >> choice;


        switch (choice) {
            case '+':
                std::cout << "Result: " << a+b << std::endl;
                break;
            case'-':
                std::cout << "Result: " << a-b << std::endl;
                break;
            default:
                break;
        }

       std::cout << "Do you want to continue? (y/n): ";
       std::cin >> response;
    }while(toupper(response) == 'Y');
}
