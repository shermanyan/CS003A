//
// Created by Sherman Yan on 10/13/22.
//

#include "movie.h"
movie::movie() : movie("", "") {}

movie::movie(const std::string &movieName, const std::string &rating) : movieName(movieName), rating(rating) {
    fillArray();
}

const std::string &movie::getMovieName() const {
    return movieName;
}

void movie::setMovieName(const std::string &movieName) {
    movie::movieName = movieName;
}

const std::string &movie::getRating() const {
    return rating;
}

void movie::setRating(const std::string &rating) {
    movie::rating = rating;
}

void movie::addRating(int rating) {

    assert(rating > 0 && rating <= 5 &&
            "Invalid Rating.\n");

    people[rating - 1]++;
}

double movie::getAverage() {
    double sum = 0;
    double count = 0;
    for (int i = 0; i < 5; i++){
        sum += people[i] * (i + 1);
        count += people[i];
    }

    return sum/count;
}

void movie::fillArray() {

    for (int i = 0; i < 5; ++i) {
        people[i] = 0;
    }
}


