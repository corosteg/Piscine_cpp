#ifndef CentralBureaucracy_H
#define CentralBureaucracy_H
#include <iostream>

class CentralBureaucracy {

public:

    CentralBureaucracy ( void );
    CentralBureaucracy (  );
    CentralBureaucracy ( CentralBureaucracy const & src );
    ~CentralBureaucracy ( void );

    CentralBureaucracy&  operator=( CentralBureaucracy const & rhs );

private:
 
};

// std::ostream &  operator<<( std::ostream & o, CentralBureaucracy const & i);

#endif
