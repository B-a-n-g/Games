#ifndef Board_hpp
#define Board_hpp

#include <vector>

#include "piece.hpp"
#include "attributes/empty.hpp"


namespace common{
    template <typename Piece = Piece<attributes::Empty>, typename Property = attributes::Empty>
    class Board{
        class Space{
            friend class Board;
            Property prop;
            Piece *piece;
        };

        std::vector<std::vector<Space *>> *spaces;
        std::vector<Piece *> pieces;


    public:
        Board(std::size_t height, std::size_t width, std::vector<Piece *> pieces) : spaces(), pieces(pieces) {
            spaces = new std::vector(height, std::vector(width));
        }

        ~Board(){
            delete spaces;
        }

        void move_piece(std::pair<std::size_t, std::size_t> from, std::pair<std::size_t, std::size_t> to){
            spaces.at(to.first).at(to.second) = spaces.at(from.first).at(from.second);
            spaces.at(from.first).at(from.second) = nullptr;
        }
    };
}

#endif