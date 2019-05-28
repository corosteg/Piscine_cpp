#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H
#include <iostream>
 
class Bureaucrat {
 
public:

    class GradeTooHighException : public std::exception {
        public:
            virtual const char* what() const throw()
            {
                return ("grade can't be higher");
            }
    };

    class GradeTooLowException : public std::exception {
        public:
            virtual const char* what() const throw()
            {
                return ("grade can't be lower");
            }
    };

    Bureaucrat ( void );
    Bureaucrat ( std::string, int );
    Bureaucrat ( Bureaucrat const & src );
    ~Bureaucrat ( void );
    
    Bureaucrat&  operator=( Bureaucrat const & rhs );

    std::string      getName() const;
    int              getGrade() const;
    void             incrementGrade();
    void             decrementGrade();
 
private:
    std::string     _name;
    int             _grade;
};
 
std::ostream &  operator<<( std::ostream & o, Bureaucrat const & i);
 
#endif