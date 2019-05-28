#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( void ) {}
 
Bureaucrat::Bureaucrat( std::string name, int grade ) : _name(name), _grade(grade) {
   if (grade > 150)
      throw Bureaucrat::GradeTooLowException();
   if (grade < 1)
      throw Bureaucrat::GradeTooHighException();
}

Bureaucrat::Bureaucrat( Bureaucrat const & src ) {
   *this = src;
}

Bureaucrat::~Bureaucrat() {}

Bureaucrat &         Bureaucrat::operator=( Bureaucrat const & rhs ) {
   this->_name = rhs.getName();
   this->_grade = rhs.getGrade();

   return *this;
}

std::string          Bureaucrat::getName() const {return this->_name;}

int                  Bureaucrat::getGrade() const {return this->_grade;}

void                 Bureaucrat::incrementGrade() {
   if (this->_grade > 1)
      this->_grade--;
   else
      throw Bureaucrat::GradeTooHighException();
}

void                 Bureaucrat::decrementGrade() {
   if (this->_grade < 150)
      this->_grade++;
   else
      throw Bureaucrat::GradeTooLowException();
}

std::ostream &  operator<<( std::ostream & o, Bureaucrat const & i ) {
   o << i.getName() << ", bureaucrat grade " << i.getGrade() << "." << std::endl;

   return o;
}