#ifndef chess_pieces_hpp
#define chess_pieces_hpp

using position_list = std::Vector<std::tuple<std::size_t, std::size_t>>;

namespace chess{
    enum Pieces_types{
        Pawn,
        Knight,
        Bishop,
        Rook,
        Queen,
        King
    };

    class Piece{
        Pieces_types type;

    public:
        Piece(Pieces_types type) : type(type){}

        position_list move_positions(){

        }
    };
}

#endif