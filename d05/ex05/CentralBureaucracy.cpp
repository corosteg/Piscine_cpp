#include "CentralBureaucracy.hpp"

CentralBureaucracy::CentralBureaucracy( void ) {}
 
CentralBureaucracy::CentralBureaucracy( ) {}

CentralBureaucracy::CentralBureaucracy( CentralBureaucracy const & src ) {
   *this = src;
}

CentralBureaucracy::~CentralBureaucracy() {}

CentralBureaucracy &         CentralBureaucracy::operator=( CentralBureaucracy const & rhs ) {
    (void)rhs;
    return *this;
}

// std::ostream &  operator<<( std::ostream & o, CentralBureaucracy const & i ) {
    // o << i.getRawBits();
// 
    // return o;
// }
