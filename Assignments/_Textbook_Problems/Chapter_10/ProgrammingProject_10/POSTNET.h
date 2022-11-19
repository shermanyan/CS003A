//
// Created by Sherman Yan on 10/13/22.
//

#ifndef CS003A_POSTNET_H
#define CS003A_POSTNET_H
#include <iostream>
#include <cmath>

class POSTNET {

private:
    std::string barcode;
    int getDigit(std::string barcode);
    std::string getDigit(int num);
    void convertZipToBar(int zip);

public:
    POSTNET();
    POSTNET(int zipcode);
    POSTNET(std::string barcode);
    const std::string& getBarcode();
    int getZipcode();

};


#endif //CS003A_POSTNET_H
