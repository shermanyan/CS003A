//
// Created by Sherman Yan on 12/9/22.
//

#include "AppDriver.h"
#include "App_BouncingObject.h"
#include "App_Pong.h"
#include "App_GreenBall.h"
#include "App_PlayingCard.h"
#include "App_PokerAnalysis.h"
#include "App_TopHatGuy.h"
#include "App_GameSelector.h"

void AppDriver::openApp(AppsEnum app, sf::RenderWindow &window) {
    switch (app) {
        case APP_GREEN_BALL: {
            App_GreenBall a;
            a.run(window);
            break;        
        }
        case APP_HOME:{
            App_GameSelector a;
            a.run(window);
            break;
        }
        case APP_BOUNCING_BALL:{
            App_BouncingObject a;
            a.run(window);
            break;
        }
        case APP_PONG:{
            App_Pong a;
            a.run(window);
            break;
        }
        case APP_PLAYING_CARD:{
            App_PlayingCard a;
            a.run(window);
            break;
        }
        case APP_POKER_ANALYSIS:{
            App_PokerAnalysis a;
            a.run(window);
            break;
        }
        case APP_OCEAN_CLEANUP:{
            App_GreenBall a;
            a.run(window);
            break;
        }
        case APP_TOP_HAT_GUY:{
            App_TopHatGuy a;
            a.run(window);
            break;
        }
        case APP_LAST_APP:{
            exit(8);
        }
    }
}


