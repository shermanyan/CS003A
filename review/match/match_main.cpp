//
// Created by Dave R. Smith on 9/8/22.
// Modified by Sherman Yan on 9/14/22
//
#include <iostream>
#include <vector>
#include <ctime>
#include "match_functions.h"

int main() {

    srand(time(0));

    std::ifstream fin;
    std::ofstream fout;

    std::vector<std::vector<char>> front;
    std::vector<std::vector<char>> back;

    std::vector<std::vector<int>> cards;

    std::cout << "- Welcome to Matches -\n";

    std::cout<<"New game?(N) or load previous game(L): ";

    do {
        char option;
        std::cin >> option;

        switch (toupper(option)) {
            case 'N':
                generateBoard(front, back);
                saveGame(front, back);
                break;
            case 'L':
                getSavedBoardFile(fin);
                generateBoard(front, back, fin);
                fin.close();
                break;
            default:
                std::cout << "Invalid Option, try again: ";
        }
    } while(front.empty());

//    print(front,std::cout);

    do{
        int curCard[2];

        if (cards.empty())
            std::cout << "Which card do you want do reveal?\n";
        else
            std::cout << "Which card do you think is a match?\n";

        print(back,std::cout);
        do {
            std::cout << "Row: ";
            curCard[0] = getInput();
            std::cout << "Column: ";
            curCard[1] = getInput();

        } while (!validCard(cards, curCard, front.size(), front[0].size()));

        cards.push_back(std::vector<int>{curCard[0], curCard[1]});

        update(front, back, cards.back()[0], cards.back()[1]);

        print(back,std::cout);

        if (cards.size() >= 2) {
            if (front[cards.front()[0]][cards.front()[1]] == front[cards.back()[0]][cards.back()[1]]) {
                std::cout << "You found a match! :)\n";
            } else {
                std::cout << "No match :(\n";
                update(back, cards.front()[0], cards.front()[1], '#');
                update(back, cards.back()[0], cards.back()[1], '#');
            }
            cards.clear();
        }

    } while(front != back);

    std::cout << "Game Over! Thanks for playing :)";

    return 0;
}





