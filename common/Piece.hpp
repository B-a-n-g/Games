#ifndef Board_hpp
#define Board_hpp

#include "./attributes/Empty.hpp"

namespace Common{
    template<typename Attribute = Common::Attributes::Empty>
    class Piece{
        Attribute attribute;
    public:
        Piece() = default;
    };
}

#endif