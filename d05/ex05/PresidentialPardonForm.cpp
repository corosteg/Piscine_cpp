#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( void ) {}
 
PresidentialPardonForm::PresidentialPardonForm( std::string target )
    : Form(
        "PresidentialPardonForm",
        25,
        5,
        target
    )
{}

PresidentialPardonForm::PresidentialPardonForm( PresidentialPardonForm const & src ) {
    *this = src;
}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm &        PresidentialPardonForm::operator=( PresidentialPardonForm const & rhs ) {
    (void)rhs;
    return *this;
}

void                            PresidentialPardonForm::action(std::string target) const
{
    std::cout << target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
