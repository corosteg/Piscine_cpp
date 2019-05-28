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
 
    Form ( void );
    Form ( std::string const _name, int const grade );
    Form ( Form const & src );
    ~Form ( void );
 
    Form&               operator=( Form const & rhs );

    std::string         getName() const;
    int                 getRequired() const;
    bool                getSigned() const;
    void                beSigned(Bureaucrat const & signatory);
 
private:

    std::string const   _name;
    int const           _required;
    bool                _signed;

};
 
std::ostream &  operator<<( std::ostream & o, Form const & i);
 
#endif
