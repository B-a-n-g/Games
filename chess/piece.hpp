#ifndef chess_pieces_hpp
#define chess_pieces_hpp

#include <vector>

using position_list = std::vector<std::tuple<std::size_t, std::size_t>>;

namespace chess{
    enum pieces_types{
        Pawn,
        Knight,
        Bishop,
        Rook,
        Queen,
        King
    };

    class piece{
        pieces_types type;

    public:
        piece(pieces_types type) : type(type){}

        position_list move_positions(){
            switch(type){
                case Pawn:
                {
                    position_list offsets = {{1,0}};
                    if(){

                    }
                    break;
                }
                case Knight:
                {
                    position_list offsets = {};
                    break;
                }
                case Bishop:
                {
                    position_list offsets = {};
                    break;
                }
                case Rook:
                {
                    position_list offsets = {};
                    break;
                }
                case Queen:
                {
                    position_list offsets = {};
                    break;
                }
                case King:
                {
                    position_list offsets = {};
                    break;
                }
            }
        }
    };
}

#endif