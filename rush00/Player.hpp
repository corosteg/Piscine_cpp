#ifndef PLAYER_H
#define PLAYER_H

#include "AEntity.hpp"
#include <ncurses.h>

class Player : public AEntity {

public:

    Player( void );
    Player(int y, int x);
    Player( Player const & src );
    ~Player();

    Player &        operator=( Player const & rhs );

    void            updateMove();
    void            updateXY(int);
    int             getY() const;
    int             getX() const;

};

#endif
