#include "Intern.hpp"

Intern::Intern( void ) {}
 
Intern::Intern( Intern const & src ) {
   *this = src;
}

Intern::~Intern() {}

Intern &            Intern::operator=( Intern const & rhs ) {
    (void)rhs;
    return *this;
}

Form*               Intern::makeForm(std::string form, std::string target) const {
    Form*           new_form = nullptr;

    if (form == "robotomy request")
        new_form = new RobotomyRequestForm(target);
    else if (form == "presidential pardon")
        new_form = new PresidentialPardonForm(target);
    else if (form == "shrubbery creation")
        new_form = new ShrubberyCreationForm(target);

    if (new_form == nullptr)
        std::cout << "Intern cannot creates " << form << std::endl;
    else
        std::cout << "Intern creates " << form << std::endl;
    
    return (new_form);
}
