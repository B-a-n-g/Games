#ifndef Board_hpp
#define Board_hpp

namespace Common{
    template <typename Piece, typename Property>
    class Board{
        class Space{
            friend class Board;
            Property prop;
            Piece *piece;
        };

        std::Vector<std::Vector<Space>> *board;

    public:
        Board(std::size_t height, std::size_t width) : board(height, std::Vector(width)){
            board = new std::Vector(height, std::Vector(width));
        }
        
        ~Board

        Board move_piece(std::pair<std::size_t, std::size_t> from, std::pair<std::size_t, std::size_t> to){
            std::swap(board.at(from.first).at(from.second), board.at(to.first).at(to.second));
        }
    };
}

#endif