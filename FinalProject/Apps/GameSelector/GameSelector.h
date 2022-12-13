//
// Created by Sherman Yan on 12/10/22.
//

#ifndef FINALPROJECT_GAMESELECTOR_H
#define FINALPROJECT_GAMESELECTOR_H
#include "AppComponent.h"
#include "Buttons/ButtonBase.h"
#include "ScrollableContainer.h"
#include <map>
#include "AppDriver.h"
#include "AppPreview.h"
#include "DetailedAppPreview.h"
#include "Play.h"
class GameSelector: public AppComponent{
private:
    float margins = 50;

    Play play;
    SpriteImage skirt;
    DetailedAppPreview detailedPreview;
    ScrollableContainer<AppPreview> container;
    std::map<AppsEnum,AppPreview> previews;
    sf::Vector2u windowSize = {1920,1080};

    void resetView(sf::RenderWindow &window);
    void setPlayButtonPos();
public:
    GameSelector();
    void draw(sf::RenderTarget &target, sf::RenderStates states) const override;
    void eventHandler(sf::RenderWindow &window, const sf::Event &event) override;
    void update(const sf::RenderWindow &window) override;



};


#endif //FINALPROJECT_GAMESELECTOR_H
