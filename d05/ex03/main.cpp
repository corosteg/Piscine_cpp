#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"
#include "Intern.hpp"

int         main()
{
    Intern                  intern;
    Bureaucrat              bureaucrat("bulbizarre", 150);
    Bureaucrat              root("ROOT", 1);
    Form*                   robot = intern.makeForm("robotomy request", "Bender");
    Form*                   shrub = intern.makeForm("shrubbery creation", "Tree");
    Form*                   pardon = intern.makeForm("presidential pardon", "Hannibal Lecter");

    root.executeForm(*robot);
    root.executeForm(*shrub);
    root.executeForm(*pardon);
    root.signForm(*robot);
    root.signForm(*shrub);
    root.signForm(*pardon);
    bureaucrat.executeForm(*robot);
    bureaucrat.executeForm(*shrub);
    bureaucrat.executeForm(*pardon);
    root.executeForm(*robot);
    root.executeForm(*shrub);
    root.executeForm(*pardon);
    
}