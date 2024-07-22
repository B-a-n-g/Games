#ifndef Board_hpp
#define Board_hpp

#include <map>
#include <vector>

#include "Piece.hpp"
#include "attributes/Empty.hpp"

namespace Common{
    template <typename Piece_type = Piece<Attributes::Empty>, typename Property = std::nullptr_t>
    class Board{
        class Space{
            friend class Board;
            Property prop;
            Piece_type *piece;
        };

        std::vector<std::vector<Space>> *board;
        std::map<Piece_type *, std::tuple<std::size_t, std::size_t>> pieces;

    public:
        Board(std::size_t height, std::size_t width) : board(height, std::Vector(width)){
            board = new std::Vector(height, std::Vector(width));
        }
        
        ~Board() {

        }

        void swap_pieces(std::pair<std::size_t, std::size_t> from, std::pair<std::size_t, std::size_t> to){// TODO make sure pieces map also reflects swap
            std::swap(board.at(from.first).at(from.second).piece, board.at(to.first).at(to.second).piece);
        }

        void move_piece(std::pair<std::size_t, std::size_t> from, std::pair<std::size_t, std::size_t> to){
            auto from_square = board
            auto to_square = board->at(to.first).at(to.second);

            if(to_square.piece){
                std::swap(from_square.piece, to_square.piece);

                pieces.at(from_square.piece) = to;
                pieces.at(to_square.piece) = {-1, -1};
            }
            else{
                to_square.piece = from_square.piece;
                from_square.piece = nullptr;
            }
        }

        static std::map<Piece_type *, std::tuple<std::size_t, std::size_t>> pieces(){
            static auto pieces_copy = pieces;
            return pieces_copy;
        }
    };
}

#endif