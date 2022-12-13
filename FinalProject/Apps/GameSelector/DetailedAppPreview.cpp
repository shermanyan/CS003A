//
// Created by Sherman Yan on 12/12/22.
//

#include "DetailedAppPreview.h"

DetailedAppPreview::DetailedAppPreview() {

    gameTitle.setFont(Fonts::getFont(LILITA_ONE));
    gameTitle.setString("DEFAULT");
    gameTitle.setCharacterSize(100);

    summary.setFont(Fonts::getFont(SONO_BOLD));
    summary.setString("DEFAULT");
    summary.setCharacterSize(40);
    Position::bottom(summary,gameTitle,10);
    summary.setPosition(summary.getPosition().x + 50,summary.getPosition().y + 20);

}

void DetailedAppPreview::draw(sf::RenderTarget &target, sf::RenderStates states) const {
    states.transform *= getTransform();
    target.draw(preview);
    target.draw(gameTitle,states);
    target.draw(summary,states);

}

void DetailedAppPreview::setBackgroundWidth(float width) {
    preview.setWidth(width);
}

void DetailedAppPreview::update(AppsEnum app) {
    curApp = app;
    preview.setTexture(AppDetail::getTexture(app));
    gameTitle.setString(AppDetail::getAppName(app));
    summary.setString(AppDetail::getAppSummary(app));
}

AppsEnum DetailedAppPreview::getCurApp() const {
    return curApp;
}


