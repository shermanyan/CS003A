//
// Created by Sherman Yan on 12/12/22.
//

#include "AppDetail.h"

std::string AppDetail::getAppName(AppsEnum app) {
    switch (app) {
        case APP_GREEN_BALL:
            return "Green Ball";
        case APP_BOUNCING_BALL:
            return "Bouncing Ball";
        case APP_PONG:
            return "Pong";
        case APP_PLAYING_CARD:
            return "Playing Card";
        case APP_POKER_ANALYSIS:
            return "Poker Analysis";
        case APP_OCEAN_CLEANUP:
            return "Ocean Cleanup";
        case APP_TOP_HAT_GUY:
            return "Top Hat Guy";
    }
    return " ";
}

sf::Texture &AppDetail::getTexture(AppsEnum app) {
    switch (app) {
        case APP_GREEN_BALL:
            return (Textures::getTexture(GP_GREEN_BALL));
        case APP_BOUNCING_BALL:
            return (Textures::getTexture(GP_BOUNCING_BALL));
        case APP_PONG:
            return (Textures::getTexture(GP_PONG));
        case APP_PLAYING_CARD:
            return (Textures::getTexture(GP_PLAYING_CARD));
        case APP_POKER_ANALYSIS:
            return (Textures::getTexture(GP_POKER_ANALYSIS));
        case APP_OCEAN_CLEANUP:
            return (Textures::getTexture(GP_OCEAN_CLEANUP));
        case APP_TOP_HAT_GUY:
            return (Textures::getTexture(GP_TOP_HAT_GUY));
        case APP_LAST_APP:
            break;
    }}

std::string AppDetail::getAppSummary(AppsEnum app) {
    switch (app) {
        case APP_GREEN_BALL:
            return "Lorem Ipsum";
        case APP_BOUNCING_BALL:
            return "Lorem Ipsum";
        case APP_PONG:
            return "Lorem Ipsum";
        case APP_TOP_HAT_GUY:
            return "Lorem Ipsum";
        case APP_PLAYING_CARD:
            return "Lorem Ipsum";
        case APP_POKER_ANALYSIS:
            return "Lorem Ipsum";
        case APP_OCEAN_CLEANUP:
            return "Lorem Ipsum";
        case APP_LAST_APP:
            return "";
    }
}