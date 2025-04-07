#include <iostream>
#include "GuessingGame.h"

int main()
{
    GuessingGame game = GuessingGame();
    game.gameOn = true;
    game.reset();
    while (game.gameOn) {
        if (game.restarted) {
            game.getRange();
            game.restarted = false;
        }
        game.getGuess();
    }
}