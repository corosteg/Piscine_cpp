#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

int         main()
{
    Bureaucrat              bureaucrat("bulbizarre", 150);
    Bureaucrat              root("ROOT", 1);
    RobotomyRequestForm     robot("HOME");
    ShrubberyCreationForm   shrub("HOME");
    PresidentialPardonForm  pardon("HOME");

    root.executeForm(robot);
    root.executeForm(shrub);
    root.executeForm(pardon);
    root.signForm(robot);
    root.signForm(shrub);
    root.signForm(pardon);
    bureaucrat.executeForm(robot);
    bureaucrat.executeForm(shrub);
    bureaucrat.executeForm(pardon);
    root.executeForm(robot);
    root.executeForm(shrub);
    root.executeForm(pardon);
    
}