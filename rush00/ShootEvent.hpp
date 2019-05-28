#ifndef SHOOTEVENT_H
#define SHOOTEVENT_H

#include "Shoot.hpp"
#include "Player.hpp"
#include "EnemyEvent.hpp"
#include <ncurses.h>

class ShootEvent {

public:

    ShootEvent( void );
    ShootEvent( Player* player, EnemyEvent* enemyEvent );
    ShootEvent( ShootEvent const & src );
    ~ShootEvent();

    ShootEvent &        operator=( ShootEvent const & rhs );

    void                newShoot();
    void                updateShoots();

private:

    bool                _checkRemove(Shoot* lst);

    Shoot*              _firstShoot;
    Player*             _player;
    EnemyEvent*         _enemyEvent;

};

#endif
