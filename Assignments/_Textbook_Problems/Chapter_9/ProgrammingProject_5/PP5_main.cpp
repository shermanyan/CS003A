//
// Created by Sherman Yan on 10/4/22.
//

#include "PP5_functions.h"

int main(){

    std::string option;
    int** labView = createLabViewer();

    do{
        printDisplay(labView);

        std::cout << "Would you like to login or logout? (\"exit\" to exit): ";
        std::cin >> option;

        if (option == "login")
            userLogin(labView);
        else if (option == "logout")
            userLogout(labView);
        else if(option != "exit")
            std::cout << "Invalid Entry";

    }while(option != "exit");

    deleteLabView(labView);
    std::cout << "Thanks, Bye!\n";
}

