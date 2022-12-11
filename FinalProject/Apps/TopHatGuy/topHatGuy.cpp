//
// Created by Sherman Yan on 10/19/22.
//

#include "topHatGuy.h"

void topHatGuy::draw(sf::RenderTarget& window, sf::RenderStates states) const{
    states.transform *= getTransform();
    window.draw(face,states);

    window.draw(top,states);
    window.draw(brim,states);
    window.draw(shirt,states);
}


topHatGuy::topHatGuy() {

    sf::Color fill = sf::Color::White;

    top.setSize({55, 50});
    brim.setSize({90, 10});
    face.setRadius(30);

    shirt.setPointCount(3);
    shirt.setRadius(25);
    shirt.setRotation(180);
    shirt.setScale(1.2,1);

    sf::FloatRect pos = top.getLocalBounds();

    top.setOrigin(pos.left + pos.width/2 , pos.top + pos.height);

    pos = brim.getLocalBounds();
    brim.setOrigin(pos.left + pos.width/2 , pos.top + pos.height);

    pos = face.getLocalBounds();
    face.setOrigin(pos.left + pos.width/2 , pos.top);

    pos = shirt.getLocalBounds();
    shirt.setOrigin(pos.left + pos.width/2 , pos.top);


    top.setPosition(0,0);
    brim.setPosition(top.getPosition().x, top.getPosition().y);
    face.setPosition(top.getPosition().x, top.getPosition().y-20);
    shirt.setPosition(top.getPosition().x,face.getLocalBounds().top + face.getRadius()*2.5);

    top.setFillColor(sf::Color(210, 180, 140));
    brim.setFillColor(sf::Color(210, 180, 140));
    face.setFillColor(sf::Color(250,184,160));
    shirt.setFillColor(sf::Color(152,115,172));

}
