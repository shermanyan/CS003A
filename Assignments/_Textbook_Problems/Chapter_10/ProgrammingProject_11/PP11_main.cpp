//
// Created by Sherman Yan on 10/13/22.
//
#include "movie.h"
int main(){

    srand(time(0));

    movie m("Lion King","G");
    int people = rand() % 10+1;

    for(int i = 0; i<people; ++i){
        std::cout << "Enter rating for person " << i << " of " << people << ": ";

        int r;
        std::cin>>r;
        m.addRating(r);
    }

    std::cout<< "The rating for " << m.getMovieName() << " is: " << m.getAverage();

}