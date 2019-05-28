#ifndef SHRUBBERYCREATIONFORM_H
#define SHRUBBERYCREATIONFORM_H
#include <iostream>
#include <fstream>
 
#include "Form.hpp"

class ShrubberyCreationForm : public Form {
 
public:
 
    ShrubberyCreationForm ( void );
    ShrubberyCreationForm ( std::string target );
    ShrubberyCreationForm ( ShrubberyCreationForm const & src );
    ~ShrubberyCreationForm ( void );
 
    ShrubberyCreationForm&  operator=( ShrubberyCreationForm const & rhs );

    void                        action(std::string target) const;

};
 
std::ostream &  operator<<( std::ostream & o, ShrubberyCreationForm const & i);
 
#endif
