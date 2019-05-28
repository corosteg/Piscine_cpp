#ifndef AENTITY_H
# define AENTITY_H

#include <iostream>
#include <unistd.h>

class AEntity {

public:

    AEntity( void );
    AEntity(int y, int x);
    AEntity( AEntity const & src );
    virtual ~AEntity();

    AEntity &       operator=( AEntity const & rhs );

    virtual void    updateMove() = 0;
    int             getX() const;
    int             getY() const;

protected:

    int             _y;
    int             _x;

};

#endif
