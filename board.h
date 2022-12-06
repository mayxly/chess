#ifndef BOARD_H
#define BOARD_H

#include <vector>
#include <memory>

#include "square.h"
#include "piece.h"
#include "rook.h"
#include "king.h"
#include "queen.h"
#include "bishop.h"
#include "knight.h"
#include "pawn.h"

enum class State {
    Normal, WhiteCheck, BlackCheck, WhiteCheckmate, BlackCheckmate, Stalemate
};

class Board {
public:
 std::vector<std::vector<Square*>> board; // make the board of all 64 squares
 Position recentPawnPos; //to check enpassant

public:
 Board(std::string type);
 ~Board();
 Square& getSquare(int x, int y);
 int isValid();
 Position getRecentPawnPos();
 void setRecentPawnPos(Position p);
 bool isCheck(std::string colour);
 bool isCheckmate(std::string colour);
 bool isMovePossible(std::string colour);
//  vector <pair<Position, Position>> getMovesPossible(std::string colour);
 State getState();
};

#endif
