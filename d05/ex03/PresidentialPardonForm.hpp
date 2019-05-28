#ifndef PRENSENDITIALPARDONFORM_H
#define PRENSENDITIALPARDONFORM_H
#include <iostream>

#include "Form.hpp"

class PresidentialPardonForm : public Form {
 
public:
 
    PresidentialPardonForm ( void );
    PresidentialPardonForm ( std::string target );
    PresidentialPardonForm ( PresidentialPardonForm const & src );
    ~PresidentialPardonForm ( void );
 
    PresidentialPardonForm&     operator=( PresidentialPardonForm const & rhs );

    void                        action(std::string target) const;
};
 
std::ostream &  operator<<( std::ostream & o, PresidentialPardonForm const & i);
 
#endif
