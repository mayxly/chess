#ifndef GAME_H
#define GAME_H

#include "display.h"
#include "board.h"
#include "player.h"
class Game {
private:
 Display *display;
 Board *board;
 Player *player1 = nullptr;
 Player *player2 = nullptr;
 int turn = 0;
 //int p1score = 0;
 //int p2score = 0;

public:
 Game(Display *d);
 void play();
 void setup();
 void addPiece(char piece, std::string square);
};

#endif
