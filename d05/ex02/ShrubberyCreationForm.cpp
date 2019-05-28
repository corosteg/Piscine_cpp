#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm( void ) {}
 
ShrubberyCreationForm::ShrubberyCreationForm( std::string target )
    : Form(
        "ShrubberyCreationForm",
        145,
        137,
        target
    )
{}

ShrubberyCreationForm::ShrubberyCreationForm( ShrubberyCreationForm const & src ) {*this = src;}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm &         ShrubberyCreationForm::operator=( ShrubberyCreationForm const & rhs ) {
    (void)rhs;
    return *this;
}

void                            ShrubberyCreationForm::action(std::string target) const
{
    std::ofstream			fileout(target + "_shrubbery");

	if (!fileout.is_open())
		std::cout << "Can't open the file";

	fileout << "     ###     " << std::endl;
	fileout << "    #o###" << std::endl;
	fileout << "  #####o###" << std::endl;
	fileout << " #o#\\#|#/###" << std::endl;
	fileout << "  ###\\|/#o#" << std::endl;
	fileout << "   # }|{  #" << std::endl;
	fileout << "     }|{" << std::endl;

	fileout.close();
}
