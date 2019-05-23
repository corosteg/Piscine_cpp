#include "Fixed.class.hpp"

Fixed::Fixed( void ) : _n(0) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( Fixed const & src ) {
    std::cout << "Copy constructor called" << std::endl;

    *this = src;
}

Fixed::Fixed( int n ) : _n(n << Fixed::_fractionalBits) {
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed( float flt ) : _n(roundf(flt * (1 << Fixed::_fractionalBits))) {
	std::cout << "Float constructor called" << std::endl;
}


Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

Fixed &         Fixed::operator=( Fixed const & rhs ) {
    std::cout << "Assignation operator called" << std::endl;
    this->_n = rhs.getRawBits();

    return *this;
}

int             Fixed::getRawBits( void ) const {
    std::cout << "getRawBits member function called" << std::endl;
	return this->_n;
}

void            Fixed::setRawBits( int const n ) {
    this->_n = n;
}

float           Fixed::toFloat( void ) const {
	return this->_n / (float)(1 << Fixed::_fractionalBits);
}

int             Fixed::toInt( void ) const {
	return this->_n >> Fixed::_fractionalBits;
}


std::ostream &  operator<<( std::ostream & o, Fixed const & i ) {
    o << i.toFloat();

    return o;
}
