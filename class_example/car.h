//
// Created by Sherman Yan on 10/4/22.
//

#ifndef CS003A_CLASS_FUNCTIONS_H
#define CS003A_CLASS_FUNCTIONS_H
#include <iostream>
class car {

private:
    std::string make, model, color, plate;
    int year;
    double price;
public:
    ///Constructors
    car();
    car(double price);
    car(const std::string& make, const std::string& model);
    car(const std::string& make, const std::string& model, const std::string& color, const std::string& plate, int year, double price);

    std::string getMake() const;
    void setMake(const std::string& make);

    std::string getModel() const;
    void setModel(const std::string& model);

    std::string getColor() const;
    void setColor(const std::string& color);

    int getYear() const;
    void setYear(int year);

    double getPrice() const;
    void setPrice(int price);

    void print();


};


#endif //CS003A_CLASS_FUNCTIONS_H
