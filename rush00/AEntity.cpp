#include "AEntity.hpp"

AEntity::AEntity()
{}

AEntity::AEntity(int y, int x) : _y(y), _x(x)
{}

AEntity::AEntity( AEntity const & src )
{
    *this = src;

    return;
}

AEntity::~AEntity()
{}

AEntity &       AEntity::operator=( AEntity const & rhs )
{
    this->_x = rhs.getX();
    this->_y = rhs.getY();

    return *this;
}

int             AEntity::getX() const
{
    return this->_x;
}

int             AEntity::getY() const
{
    return this->_y;
}
