#ifndef FORM_H
#define FORM_H
#include <iostream>
#include "Bureaucrat.hpp"
 
class Bureaucrat;

class Form {
 
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
                return ("Need grade higher to sign this");
            }
    };

    class GradeTooLowExecuteException : public std::exception {
        public:
            virtual const char* what() const throw()
            {
                return ("Need grade higher to execute this");
            }
    };

    class NotSignedException : public std::exception {
        public:
            virtual const char* what() const throw()
            {
                return ("Need signed form to execute this ");
            }
    };
 
    Form ( void );
    Form ( std::string const _name, int const grade, int exec, std::string target );
    Form ( Form const & src );
    ~Form ( void );
 
    Form&               operator=( Form const & rhs );

    virtual void        action(std::string target) const = 0;
    std::string         getName() const;
    int                 getRequired() const;
    bool                getSigned() const;
    void                beSigned(Bureaucrat const & signatory);
    void                execute(Bureaucrat const & executor) const;
 
private:

    std::string const   _name;
    int const           _required;
    bool                _signed;
    std::string         _target;
    int                 _exec;

};
 
std::ostream &  operator<<( std::ostream & o, Form const & i);
 
#endif
