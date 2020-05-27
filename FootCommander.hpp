#pragma once
#include <string>
#include <vector>
#include <stdexcept>
#include "FootSoldier.hpp"

namespace WarGame
{
    class FootCommander : public FootSoldier{

        public:
        FootCommander(uint player): FootSoldier(player){
            fullHealth+= 50;
            currentHealth += 50;
            power += 10;
            }
        void activate(int x, int y, Board& board_f) override;
        //void printSoldier() override;
    };

} 