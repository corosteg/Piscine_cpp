#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm( void ) {}
 
RobotomyRequestForm::RobotomyRequestForm( std::string target ) 
    : Form(
        "RobotomyRequestForm",
        72,
        45,
        target
    )
{}

RobotomyRequestForm::RobotomyRequestForm( RobotomyRequestForm const & src ) {
    *this = src;
}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm &           RobotomyRequestForm::operator=( RobotomyRequestForm const & rhs ) {
    (void)rhs;
    return *this;
}

void                            RobotomyRequestForm::action(std::string target) const
{
    std::srand(std::time(NULL));
    system("afplay ../ex02/drill.mp3");

	if (std::rand() % 2)
		std::cout << target << " has been robotomized successfully!" << std::endl;
	else
		std::cout << target << "'s robotomy was a failure..." << std::endl;
}
