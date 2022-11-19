//
// Created by Sherman Yan on 9/22/22.
//

#include <iostream>

int** createArray(int row, int col);
void fillArray(int row, int col, int **ptr);
int** resize(int& row, int& col, int** ptr);
void deleteArray(int** ptr, int row, int col);
void printArray(int** ptr, int row, int col);

int main(){

    int row = 2, col = 3;
    int** array = createArray(row,col);
    fillArray(row,col,array);
    printArray(array, row, col);

    array = resize(row,col,array);
    printArray(array, row, col);

    deleteArray(array, row, col);
    return 0;

}

int** createArray(int row, int col){

    int** array = new int*[row];

    for(int i = 0; i < row; i ++){
        array[i] = new int[col];
    }

    return array;
}

void fillArray(int row, int col, int **ptr){

    for(int i = 0; i < row; i++){
        for(int j = 0; j< col;j++)
            ptr[i][j] = 0;
    }
}

int** resize(int& row, int& col, int** ptr){

    deleteArray(ptr, row, col);

    row *= 2;
    col *= 2;

    return createArray(row, col);
}
void deleteArray(int** ptr, int row, int col){

    for(int i = 0; i<row;i++)
        delete[] ptr[i];
    delete[] ptr;
}

void printArray(int** ptr, int row, int col){
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++)
            std::cout<< ptr[i][j];
        std::cout<< std::endl;
    }
    std::cout<< std::endl;
}

