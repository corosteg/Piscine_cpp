#ifndef INTERN_H
#define INTERN_H
#include <iostream>
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
 
class Intern {
 
public:
 
    Intern ( void );
    Intern ( Intern const & src );
    ~Intern ( void );
 
    Intern&     operator=( Intern const & rhs );

    Form*       makeForm(std::string form, std::string target) const;

private:
 
};
 
#endif
