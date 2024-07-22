#ifndef Piece_hpp
#define Piece_hpp

#include "./attributes/Empty.hpp"

namespace Common{
    template<typename Attribute = Attributes::Empty>
    class Piece{
        Attribute attribute;
        
    public:
        Piece() = default;
    };
}

#endif