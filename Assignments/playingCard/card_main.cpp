////
//// Created by Sherman Yan on 10/19/22.
////
////#include "topHatGuy.h"
//#include "Card.h"
//
//int main(){
//    sf::RenderWindow window({1000,1000,32},"playing card");
//    window.setFramerateLimit(60);
//
//    Card card(HEARTS,QUEEN);
//    Card card1(CLUBS,KING);
//    card.setPosition(100,100);
////    card.setSize(100,1000);
//
//    while(window.isOpen()){
//        sf::Event event;
//
//        while(window.pollEvent(event)){
//            if (sf::Event::Closed == event.type)
//                window.close();
//        }
//
//        if(sf::Mouse::isButtonPressed(sf::Mouse::Left)){
//            card.setPosition(sf::Mouse::getPosition(window).x,sf::Mouse::getPosition(window).y);
//        }
//        window.clear();
//        window.draw(card);
//        window.draw(card1);
//        window.display();
//    }
//    return 0;
//}