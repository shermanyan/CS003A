//
// Created by Dave R. Smith on 9/8/22.
// Modified by Sherman Yan on 9/14/22
//
#include "match_functions.h"

std::vector<char> getLetters(int size) {
    std::vector<char> letters;
    if (size % 2 == 0) {

        char a = 'A';
        for (int i = 0; i < size / 2; i++) {
            letters.push_back(a);
            letters.push_back(a++);
        }
    }
    return letters;
}

void shuffle(std::vector<char> &v) {
    for (int i = 0; i < v.size(); i++) {
        int idx = rand() % v.size();
        char temp = v[i];
        v[i] = v[idx];
        v[idx] = temp;
    }
}

//fill vector with two of each letter
void fill(std::vector<std::vector<char>> &v) {
    int size = v.size() * v[0].size();
    std::vector<char> l = getLetters(size);
    shuffle(l);
    int idx = 0;
    for (int i = 0; i < v.size(); i++) {
        for (int j = 0; j < v[i].size(); j++) {
            v[i][j] = l[idx++];
        }
    }
}

void print(std::vector<std::vector<char>> v, std::ostream &outputLocation) {
    outputLocation << std::endl;
    for (int i = 0; i < v.size(); ++i) {
        for (int j = 0; j < v[i].size(); ++j) {
            outputLocation.width(3);
            outputLocation << v[i][j];
        }
        outputLocation << std::endl;
    }
    outputLocation << std::endl;
}

std::vector<std::vector<char>> createArray(int row, int col) {
    std::vector<std::vector<char>> v(row, std::vector<char>(col, '#'));

    return v;
}

void reveal(std::vector<std::vector<char>> &front, std::vector<std::vector<char>> &back, int row, int col) {
    for (int i = 0; i < back.size(); i++) {
        for (int j = 0; j < back[i].size(); ++j) {
            std::cout.width(3);
            if (i == row && j == col) {

                std::cout << front[i][j];
            } else {
                std::cout << back[i][j];
            }

        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
}

void update(std::vector<std::vector<char>> &front, std::vector<std::vector<char>> &back, int row, int col) {
    back[row][col] = front[row][col];
}

void update(std::vector<std::vector<char>> &back, int row, int col, char value) {
    back[row][col] = value;
}

int getInput() {
    int input;
    std::cin >> input;
    return input;
}

bool validBoardSize(int row, int col) {
    if ((row * col) % 2 == 0 && row * col <= 26 && row * col > 0)
        return true;
    else {
        std::cout << "Invalid Board Size. Try again\n";
        return false;
    }
}

bool validCard(std::vector<std::vector<int>> &cards, const int curCard[], int maxRow, int maxCol) {

    if ((!cards.empty() && (std::vector<int>{curCard[0], curCard[1]} == cards.front()))
        || (0 > curCard[0] || curCard[0] >= maxRow) || (0 > curCard[1] || curCard[1] >= maxCol)) {
        std::cout << "Invalid Card Selection. Try again\n";
        return false;
    } else
        return true;
}

void generateBoard(std::vector<std::vector<char>> &front, std::vector<std::vector<char>> &back) {
    int rows;
    int cols;
    do {
        std::cout << "Enter board rows: ";
        rows = getInput();
        std::cout << "Enter board columns: ";
        cols = getInput();

    } while (!validBoardSize(rows, cols));

    front = createArray(rows, cols);
    back = createArray(rows, cols);

    fill(front);
    std::cout << rows << " x " << cols << " board created....\n";
}

void generateBoard(std::vector<std::vector<char>> &front, std::vector<std::vector<char>> &back, std::ifstream &fin) {

    int rows = 0;
//    int cols = 0;

    std::string next;

    while (getline(fin, next)) {
        if (!next.empty()) {
            rows++;
//            if (!cols)
//                for (int i = 0; i < next.length(); i++)
//                    if (isalpha(next[i]))
//                        cols++;
        }
    }

    fin.clear();
    fin.seekg(0);

    front = createArray(rows, 0);

    int rowIdx = 0;
    while (getline(fin, next)) {
        if (!next.empty()) {
            for (int i = 0; i < next.length(); i++) {
                if (isalpha(next[i]))
                    front[rowIdx].push_back(next[i]);
            }
            rowIdx++;
        }
    }

    back = createArray(front.size(), front[0].size());


    std::cout << rows << " x " << front[0].size() << " board created....\n";
}

void getSavedBoardFile(std::ifstream &fin) {
    std::string filename;
    std::cout << "Enter saved game filename: ";
    std::cin >> filename;

    if (!openFile(fin, filename)) {
        std::cout << "Invalid filename, Try again\n";
        getSavedBoardFile(fin);
    }
}

bool openFile(std::ofstream &fout, std::string filepath) {
    fout.open(filepath);
    return fout.fail();
}

bool openFile(std::ifstream &fin, std::string filepath) {
    fin.open(filepath);
    return !(fin.fail());
}

void saveGame(std::vector<std::vector<char>> &front, std::vector<std::vector<char>> &back) {
    std::ofstream fout;
    std::string filename;
    char selection;

    std::cout << "Would you like to save the current board? (Y/N): ";
    std::cin >> selection;

    switch (toupper(selection)) {
        case 'Y':
            std::cout << "Enter filename to save current board: ";
            std::cin >> filename;
            if (openFile(fout, filename))
                std::cout << "\"" + filename + " \" was not found. File has been created.\n";
            print(front, fout);
            fout.close();
            std::cout << "Board saved to " + filename +" !\n";
            break;
        case 'N':
            std::cout << "Okay!\n";
            break;
        default:
            std::cout << "Invalid Selection, try again.\n";
            saveGame(front, back);
    }
}