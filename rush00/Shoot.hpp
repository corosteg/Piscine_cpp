#ifndef SHOOT_H
#define SHOOT_H

#include "AEntity.hpp"
#include <ncurses.h>

class Shoot : public AEntity {

public:

    Shoot( void );
    Shoot(int y, int x);
    Shoot( Shoot const & src );
    virtual ~Shoot();

    Shoot &        operator=( Shoot const & rhs );

    void            updateMove();
    void            updateXY();
    int             getY() const;
    int             getX() const;

    Shoot*          next;
    Shoot*          prev;

};

#endif
