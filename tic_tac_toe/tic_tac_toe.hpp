#ifndef Tic_tac_toe_hpp
#define Tic_tac_toe_hpp

#include "../common/Board.hpp"
#include "../common/Piece.hpp"
#include "../common/attributes/Empty.hpp"

namespace tic_tac_toe{
    class Tic_tac_toe{
        Common::Board<int, int> board;
        bool cross_turn;

        Tic_tac_toe(): board(3,3), cross_turn(true){}

        bool game_over(){
            
        }

        bool has_won(bool player){

        }
    }
}

#endif