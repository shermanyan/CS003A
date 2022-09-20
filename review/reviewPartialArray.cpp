#include <iostream>
#include <iomanip>

//inserts at the end of the array
void insert(int arr[], int capacity, int &numUsed, int value);

void insert(int arr[], int capacity, int &numUsed, int index, int value);

void shiftRight(int arr[], int capacity, int &numUsed, int index);

void shiftLeft(int arr[], int capacity, int &numUsed, int index);

void print(int arr[], int capacity, int &numUsed);

void remove(int arr[], int capacity, int &numUsed, int value);

int main() {
    int size = 100;
    int numUsed = 0;
    int arr[size];

    std::cout.setf(std::ios::left);

    std::cout << std::setw(30) << "-insert 0-9: ";

    for (int i = 0; i < 10; i++)
        insert(arr, size, numUsed, i);

    print(arr, size, numUsed);
    std::cout << std::endl;


    std::cout << std::setw(30) << "-add 10 0's:";

    for (int i = 0; i < 20; i += 2) {
        insert(arr, size, numUsed, 0);
    }
    print(arr, size, numUsed);
    std::cout << std::endl;

    std::cout << std::setw(30) << "-insert 3 index 15:";

    insert(arr, size, numUsed, 15,3);

    print(arr, size, numUsed);
    std::cout << std::endl;


    std::cout << std::setw(30) << "-remove all 3s:";
    remove(arr, size, numUsed, 3);

    print(arr, size, numUsed);
    std::cout << std::endl;



    return 0;
}

void insert(int arr[], int capacity, int &numUsed, int value) {

    if (numUsed < capacity) {
        arr[numUsed] = value;
        numUsed++;
    }
}

void insert(int arr[], int capacity, int &numUsed, int index, int value) {

    if (numUsed < capacity) {
        shiftRight(arr, capacity, numUsed, index);
        arr[index] = value;
    }
    numUsed++;

}

void shiftRight(int arr[], int capacity, int &numUsed, int index) {

    if (numUsed + 1 < capacity && index < capacity) {
        for (int i = numUsed; i > index; i--)
            arr[i+1] = arr[i];
    }
}

void shiftLeft(int arr[], int capacity, int &numUsed, int index) {

    if (numUsed < capacity) {
        for (int i = index; i < numUsed; i++)
            arr[i] = arr[i + 1];
    }
    numUsed--;
}

void print(int arr[], int capacity, int &numUsed) {

    if (numUsed < capacity) {
        for (int i = 0; i < numUsed; i++) {
            std::cout << arr[i] << " ";
        }
    }
}

//void remove(int arr[], int &numUsed, int index){
//
//    for(int i = index; i < numUsed; i++){
//        arr[i] = arr[i + 1];
//    }
//    numUsed--;
//}

void remove(int arr[], int capacity, int &numUsed, int value) {

    for (int i = 0; i < numUsed; i++) {
        if (arr[i] == value) {
            shiftLeft(arr,capacity,numUsed,i);
        }
    }
}
