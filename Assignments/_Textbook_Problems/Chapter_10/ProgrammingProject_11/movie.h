//
// Created by Sherman Yan on 10/13/22.
//

#ifndef CS003A_MOVIE_H
#define CS003A_MOVIE_H
#include <iostream>
#include <cassert>

class movie {

private:
    std::string movieName;
    std::string rating;
    int people[5];

    void fillArray();
public:
    movie();
    movie(const std::string &movieName, const std::string &rating);

    const std::string &getMovieName() const;
    void setMovieName(const std::string &movieName);
    const std::string &getRating() const;
    void setRating(const std::string &rating);

    void addRating(int rating);
    double getAverage();

};


#endif //CS003A_MOVIE_H
