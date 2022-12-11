//
// Created by Sherman Yan on 12/9/22.
//
#include "GameConsoleFunctions.h"

void runGame(GamesEnum gameID, sf::RenderWindow& window) {
    switch (gameID) {
        case GREEN_BALL: {
            App_GreenBall a;
            a.run(window);
            break;
        }
        case BOUNCING_BALL: {
            App_BouncingObject a;
            a.run(window);
            break;
        }
        case PONG: {
            App_Pong a;
            a.run(window);
            break;
        }
        case TOP_HAT_GUY: {
            App_TopHatGuy a;
            a.run(window);
            break;
        }
        case PLAYING_CARD: {
            App_PlayingCard a;
            a.run(window);
            break;
        }
        case POKER_ANALYSIS:{
            App_PokerAnalysis a;
            a.run(window);
            break;
        }
        case OCEAN_CLEANUP: {
            break;
        }
        case LAST_GAME:
            break;
    }
}
