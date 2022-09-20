//
// Created by Sherman Yan on 9/1/22.
//

#include "reviewFunction.h"

double maxx(double val1, double val2) {
    return val1 > val2 ? val1 : val2;
}

std::vector<std::string> splitString(std::string s, char delimiter){

    std::string temp;
    std::vector<std::string> v;

    for(int i = 0; i < s.length(); i++){
         if(s[i] == delimiter) {
             v.push_back(temp);
             while (s[i] == delimiter && i <= s.size())
                 i++;
             temp = s[i];
         }
         else {
             temp += s[i];
         }
    }

    return v;
}

bool isEven(std::vector<std::vector<char>> v){

}

//fill vector with two of each letter
void fillVector(std::vector<std::vector<char>> &v){

    int size = v.size() * v[0].size();
    std::vector<char> l = getLetters(size);
    shuffle(l);
    int idx = 0;
    for(int i=0; i<v.size(); i++){
        v.push_back(std::vector<char>());
        for(int j=0; j<v[i].size(); j++){
            v[i].push_back(l[idx++]);
        }
    }
}
std::vector<char> getLetters(int size){
    std::vector<char> letters;
    if(size % 2 == 0){
        char a = 'A';
        for (int i = 0; i < size/2; i++) {
            letters.push_back(a);
            letters.push_back(a++);
        }
    }
    return letters;
}
void shuffle(std::vector<char> &v){
    for(int i = 0; i<v.size(); i++){
        int idx = rand() % v.size();

        char temp = v[i];
        v[i] = v[idx];
        v[idx] = v[i];

    }
}
//
void printVector(std::vector<std::vector<char>> v){

}
//
void flip(std::vector<std::vector<char>> &v, int row, int col){

}
//
char getInput(){

}
//
void output(std::string message){

}
