#include <stdio.h>
#include <iostream>
#include "Board.hpp"


using namespace std;
using namespace WarGame;
void Board::move(uint player_number, std::pair<int,int> source, Board::MoveDIR direction)
{
}

bool Board::has_soldiers(uint player_number) const{
    return true;

}
Soldier*& Board::operator[](std::pair<int,int> location){
        return board[location.first][location.second];

}

// operator for reading which soldiers are on the game-board.
Soldier* Board::operator[](std::pair<int,int> location) const{
        return board[location.first][location.second];
}