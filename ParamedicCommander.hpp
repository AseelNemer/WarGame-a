#pragma once
#include <string>
#include <vector>
#include <stdexcept>
#include "Paramedic.hpp"

namespace WarGame
{
    class ParamedicCommander : public Paramedic{

        public:
        ParamedicCommander(uint player): Paramedic(player){
            fullHealth+= 100;
            currentHealth += 100;
            }
        void activate(int x, int y, Board& board_f) override;
    };

} 