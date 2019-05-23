#ifndef FIXED_H
#define FIXED_H

#include <iostream>
#include <cmath>

class Fixed {

public:

    Fixed ( void );
    Fixed ( int n );
    Fixed ( float n );
    Fixed ( Fixed const & src );
    ~Fixed ( void );

    Fixed&  operator=( Fixed const & rhs );

    int     getRawBits( void ) const;
    void    setRawBits( int const n );
    float   toFloat( void ) const;
    int     toInt( void ) const;

private:

    int                 _n;
    static const int    _fractionalBits = 8;

};

std::ostream &  operator<<( std::ostream & o, Fixed const & i);

#endif
