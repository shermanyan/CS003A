//
// Created by Sherman Yan on 10/13/22.
//
#include "POSTNET.h"

int main(){

    POSTNET p1(99504);
    POSTNET p2("110100101000101011000010011");

    std::cout << "p1 Zipcode: " << p1.getZipcode() << std::endl;
    std::cout << "p1 Barcode: " << p1.getBarcode() << std::endl;
    std::cout << "p2 Zipcode: " << p2.getZipcode() << std::endl;
    std::cout << "p2 Barcode: " << p2.getBarcode() << std::endl;



    return 0;


}