//
// Created by Sherman Yan on 9/19/22.
//
#include <iostream>

bool isPalindrome(std::string input);
void removeSpaces(std::string &sentence);

int main(){

    char option;
    do {
        std::string input;

        std::cout << "Enter a word to check for Palindrome: ";

        while(input.empty()){
            getline(std::cin,input);
        }
        std::cout << "\"" + input + "\"";

        removeSpaces(input);

        if (isPalindrome(input))
            std::cout << " is a palindrome.\n";
        else
            std::cout << " is not a palindrome.\n";

        std:: cout << "Would you like to try another one? (Y/N): ";
        std:: cin >> option;
    } while(toupper(option) == 'Y');

    std:: cout << "Thanks Bye. ";


}

bool isPalindrome(std::string input){

    char *begin, *end;

    begin = &input[0];
    end = &input[input.size()-1];

    while(begin != end && begin < end){

        if (toupper(*begin) != toupper(*end))
            return false;

        begin ++;
        end --;
    }

    return true;

}

void removeSpaces(std::string &sentence){
    for(int i = 0; sentence[i] != '\0'; i++) {
        if (isalpha(sentence[i]) == 0){
            sentence = sentence.erase(i, 1);
            i--;
        }
    }
}
