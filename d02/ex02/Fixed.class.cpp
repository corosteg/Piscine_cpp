#include "Fixed.class.hpp"

Fixed::Fixed( void ) : _n(0) {
}

Fixed::Fixed( Fixed const & src ) {

    *this = src;
}

Fixed::Fixed( int n ) : _n(n << Fixed::_fractionalBits) {
}

Fixed::Fixed( float flt ) : _n(roundf(flt * (1 << Fixed::_fractionalBits))) {
}


Fixed::~Fixed() {
}

/* Assignation */

Fixed &         Fixed::operator=( Fixed const & rhs ) {
    this->_n = rhs.getRawBits();

    return *this;
}

/* Comparaison operators*/

bool            Fixed::operator<( Fixed const & rhs ) {
    return this->getRawBits() < rhs.getRawBits();
}

bool            Fixed::operator>( Fixed const & rhs ) {
    return this->getRawBits() > rhs.getRawBits();
}

bool            Fixed::operator<=( Fixed const & rhs ) {
    return this->getRawBits() <= rhs.getRawBits();
}

bool            Fixed::operator>=( Fixed const & rhs ) {
    return this->getRawBits() >= rhs.getRawBits();
}

bool            Fixed::operator==( Fixed const & rhs ) {
    return this->getRawBits() == rhs.getRawBits();
}

bool            Fixed::operator!=( Fixed const & rhs ) {
    return this->getRawBits() != rhs.getRawBits();
}

/* Arithmetic operators */

Fixed           Fixed::operator+( Fixed const & rhs ) {
    return Fixed( this->_n + rhs.getRawBits() );
}

Fixed           Fixed::operator-( Fixed const & rhs ) {
    return Fixed( this->_n - rhs.getRawBits() );
}

Fixed           Fixed::operator*( Fixed const & rhs ) {
    long				tmp;
    Fixed               result;

	tmp = this->_n;
	tmp *= rhs.getRawBits();
	tmp >>= Fixed::_fractionalBits;
    result._n = tmp; 

    return result;
}

Fixed           Fixed::operator/( Fixed const & rhs ) {
    long				tmp;
    Fixed               result;

	tmp = this->_n;
	tmp <<= Fixed::_fractionalBits;
	tmp /= rhs.getRawBits();
    result._n = tmp;

    return result;
}

/*increments operators*/

Fixed &					Fixed::operator++()
{
	this->_n++;
	return *this;
}

Fixed &					Fixed::operator--()
{
	this->_n--;
	return *this;
}

Fixed 					Fixed::operator++(int)
{
	Fixed				old_value;

	old_value = *this;
	this->_n++;

	return old_value;
}

Fixed 					Fixed::operator--(int)
{
	Fixed				old_value;

	old_value = *this;
	this->_n--;

	return old_value;
}

/* Min, Max*/

Fixed &			Fixed::max(Fixed & a, Fixed & b)
{
	if (a.getRawBits() > b.getRawBits())
		return a;
	return b;
}

Fixed &			Fixed::min(Fixed & a, Fixed & b)
{
	if (a.getRawBits() < b.getRawBits())
		return a;
	return b;
}

Fixed const &	Fixed::max(Fixed const & a, Fixed const & b)
{
	if (a.getRawBits() > b.getRawBits())
		return a;
	return b;
}

Fixed const &	Fixed::min(Fixed const & a, Fixed const & b)
{
	if (a.getRawBits() < b.getRawBits())
		return a;
	return b;
}

/* other member functions*/

int             Fixed::getRawBits( void ) const {
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
