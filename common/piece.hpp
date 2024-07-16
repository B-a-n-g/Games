#ifndef piece_hpp
#define piece_hpp

#include "./attributes/empty.hpp"

namespace common{
    template<typename Attribute = attributes::Empty>
    class Piece{
        Attribute attribute;
    public:
        Piece() = default;
    };
}

#endif