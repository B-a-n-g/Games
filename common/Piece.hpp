#ifndef Board_hpp
#define Board_hpp

#include "./attributes/Empty.hpp"

namespace Common{
    template<typename Attribute = Common::Attributes::Empty>
    class Piece{
        Attribute att;
    public:
        Piece() = default;

        ~Piece() = default;


    };
}

#endif