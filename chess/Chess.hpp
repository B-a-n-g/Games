#ifndef Chess_hpp
#define Chess_hpp

#include "../common/Board.hpp"
#include "../common/Piece.hpp"

#include "../common/Attributes/None.hpp"

namespace chess{
    class Chess{
        Common::Board<Common::Piece<>, Common::Attributes::None> board;

    public:

    };
}

#endif