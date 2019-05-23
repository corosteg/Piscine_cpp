#ifndef FIXED_H
#define FIXED_H

#include <iostream>

class Fixed {

public:

    Fixed ( void );
    Fixed ( int n );
    Fixed ( Fixed const & src );
    ~Fixed ( void );

    Fixed&  operator=( Fixed const & rhs );

    int     getRawBits( void ) const;
    void    setRawBits( int const n );

private:

    int                 _n;
    static const int    _fractionalBits = 8;

};

std::ostream &  operator<<( std::ostream & o, Fixed const & i);

#endif
