//
// Created by Sherman Yan on 12/12/22.
//

#ifndef FINALPROJECT_DETAILEDAPPPREVIEW_H
#define FINALPROJECT_DETAILEDAPPPREVIEW_H

#include <SFML/Graphics.hpp>
#include "SpriteImage.h"
#include "AppsEnum.h"
#include <string>
#include "States.h"
#include "AppDetail.h"
#include "Fonts.h"
#include "Position.h"

class DetailedAppPreview: public sf::Drawable, public sf::Transformable, public States{
private:
    SpriteImage preview;
    sf::Text gameTitle;
    sf::Text summary;

    AppsEnum curApp;

    std::string summaryText;

public:
    AppsEnum getCurApp() const;

    DetailedAppPreview();
    void setBackgroundWidth(float width);
    void update(AppsEnum app);


protected:
    void draw(sf::RenderTarget &target, sf::RenderStates states) const override;
};


#endif //FINALPROJECT_DETAILEDAPPPREVIEW_H
