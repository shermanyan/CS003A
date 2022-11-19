//
// Created by Sherman Yan on 10/13/22.
//

#include "POSTNET.h"


POSTNET::POSTNET(){

}
POSTNET::POSTNET(int zipcode){
    convertZipToBar(zipcode);
}
POSTNET::POSTNET(std::string barcode): barcode(barcode){}

const std::string& POSTNET::getBarcode(){
    return barcode;
}

int POSTNET::getZipcode(){

    std::string zip;
    std::string bc = barcode.substr(1);

    for (int i = 0; i < 5; i++) {
        zip += std::to_string(getDigit(bc.substr(0,5)));
        bc = bc.substr(5);
    }

    return std::stoi(zip);
}

std::string POSTNET::getDigit(int num){
    std::string result;
    int sum = 0;
    int encode[] = {7,4,2,1,0};

    for(int i = 0; i < 4; i ++){
        if (encode[i]+ sum <= num ) {
            result += "1";
            sum += encode[i];
        }
        else{
            result += "0";
        }
    }
    result += "0";
    return result;
}

int POSTNET::getDigit(std::string barcode){
    int encode[] = {7,4,2,1,0};
    int sum = 0;
    for(int i =0 ; i < 5; i++ ){
        int s = barcode[i]- '0';
        sum += encode[i] * s ;
    }
    return sum == 11? 0 : sum;

}

void POSTNET::convertZipToBar(int zip){
    barcode = "1";

    for(int i = 4; i>=0; i--){
        int num = static_cast<int>(zip/pow(10,i)) % 10;
        std::string dig = getDigit(num);
        barcode += dig;
    }

    barcode += "1";

}