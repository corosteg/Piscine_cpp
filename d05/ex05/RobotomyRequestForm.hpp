#ifndef ROBOTOMYREQUESTFORM_H
#define ROBOTOMYREQUESTFORM_H
#include <iostream>
 
#include "Form.hpp"

class RobotomyRequestForm : public Form {
 
public:
 
    RobotomyRequestForm ( void );
    RobotomyRequestForm ( std::string target );
    RobotomyRequestForm ( RobotomyRequestForm const & src );
    ~RobotomyRequestForm ( void );
 
    RobotomyRequestForm&  operator=( RobotomyRequestForm const & rhs );

    void                        action(std::string target) const;
 
};
 
std::ostream &  operator<<( std::ostream & o, RobotomyRequestForm const & i);
 
#endif
