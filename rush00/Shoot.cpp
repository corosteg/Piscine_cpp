#include "Shoot.hpp"

Shoot::Shoot()
{}

Shoot::Shoot(int y, int x) : AEntity( y, x )
{}

Shoot::Shoot( Shoot const & src )
{
    *this = src;

    return;
}

Shoot::~Shoot()
{}

Shoot &       Shoot::operator=( Shoot const & rhs )
{
    this->_x = rhs.getX();
    this->_y = rhs.getY();

    return *this;
}

int             Shoot::getX() const
{
    return this->_x;
}

int             Shoot::getY() const
{
    return this->_y;
}

void            Shoot::updateXY()
{
    if( this->_y >= 0 )
        this->_y--;
}

void            Shoot::updateMove()
{
    if (this->_y - 2 >= 0)
    {
	    move(this->_y - 2, this->_x);
        printw("|");
    }
    if (this->_y - 1 >= 0)
    {
        move(this->_y - 1, this->_x);
        printw("|");
    }
    if (this->_y >= 0)
    {
	    move(this->_y, this->_x);
        printw("|");
    }
}
