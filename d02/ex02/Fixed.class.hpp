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
    bool    operator<( Fixed const & rhs);
    bool    operator>( Fixed const & rhs);
    bool    operator<=( Fixed const & rhs);
    bool    operator>=( Fixed const & rhs);
    bool    operator==( Fixed const & rhs);
    bool    operator!=( Fixed const & rhs);
    
    Fixed   operator+( Fixed const & rhs);
    Fixed   operator-( Fixed const & rhs);
    Fixed   operator*( Fixed const & rhs);
    
    Fixed   operator/( Fixed const & rhs);
    Fixed & operator++();
    Fixed & operator--();
    Fixed   operator++( int );
    Fixed   operator--( int );

    static Fixed &			max(Fixed & a, Fixed & b);
	static Fixed &			min(Fixed & a, Fixed & b);
	static Fixed const &	max(Fixed const & a, Fixed const & b);
	static Fixed const &	min(Fixed const & a, Fixed const & b);

private:

    int                 _n;
    static const int    _fractionalBits = 8;

};

std::ostream &  operator<<( std::ostream & o, Fixed const & i);

#endif
