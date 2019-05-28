#include "Bureaucrat.hpp"
#include "Form.hpp"

int         main()
{
    try
    {
        Bureaucrat  bureaucrat("henry", 155);
    }
    catch (Bureaucrat::GradeTooHighException& e)
    {
        std::cout << e.what() << std::endl;
    }
    catch (Bureaucrat::GradeTooLowException& e)
    {
        std::cout << e.what() << std::endl;
    }
    catch (std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }

    try
    {
        Bureaucrat  bureaucrat("paul", 0);
    }
    catch (Bureaucrat::GradeTooHighException& e)
    {
        std::cout << e.what() << std::endl;
    }
    catch (Bureaucrat::GradeTooLowException& e)
    {
        std::cout << e.what() << std::endl;
    }
    catch (std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << std::endl;

    try
    {
        Bureaucrat  bureaucrat("pikachu", 20);
        for (int i = 0; i < 20 ; i++)
        {
            bureaucrat.incrementGrade();
            std::cout << bureaucrat;
        }
    }
    catch (Bureaucrat::GradeTooHighException& e)
    {
        std::cout << e.what() << std::endl;
    }
    catch (Bureaucrat::GradeTooLowException& e)
    {
        std::cout << e.what() << std::endl;
    }
    catch (std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << std::endl;

    try
    {
        Bureaucrat  bulbizarre("bulbizarre", 140);
        for (int i = 0; i < 20 ; i++)
        {
            bulbizarre.decrementGrade();
            std::cout << bulbizarre;
        }
    }
    catch (Bureaucrat::GradeTooHighException& e)
    {
        std::cout << e.what() << std::endl;
    }
    catch (Bureaucrat::GradeTooLowException& e)
    {
        std::cout << e.what() << std::endl;
    }
    catch (std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << std::endl;

    Bureaucrat  bulbizarre("bulbizarre", 140);
    Bureaucrat  root("ROOT", 1);
    Form        form("order 66", 1);
    Form        form2("order 42", 1);

    root.signForm(form);
    bulbizarre.signForm(form);
    bulbizarre.signForm(form2);
    root.signForm(form2);

}