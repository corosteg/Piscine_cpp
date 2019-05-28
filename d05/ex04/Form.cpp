#include "Form.hpp"

Form::Form( void ) : _name("default name"), _required(150), _signed(false) {}
 
Form::Form( std::string const name, int const grade, int exec, std::string target )
    : _name(name),
    _required(grade),
    _signed(false),
    _target(target),
    _exec(exec)
{}

Form::Form( Form const & src ) : _required(src.getRequired()) {
    *this = src;
}

Form::~Form() {}

Form &          Form::operator=( Form const & rhs ) {
    this->_signed = rhs.getSigned();

    return *this;
}

std::string     Form::getName() const {return this->_name;}

int             Form::getRequired() const {return this->_required;}

bool            Form::getSigned() const {return this->_signed;}

void            Form::beSigned(Bureaucrat const & signatory) {
    if (signatory.getGrade() <= this->_required)
        this->_signed = true;
    else
        throw Form::GradeTooLowException();
}

void            Form::execute(Bureaucrat const & executor) const {
    if (!this->_signed)
        throw Form::NotSignedException();
    else if (executor.getGrade() <= this->_exec)
        action(_target);
    else
        throw Form::GradeTooLowExecuteException();
}

std::ostream &  operator<<( std::ostream & o, Form const & i ) {
    if (i.getSigned())
        o << i.getName() << " is form signed and have " << i.getRequired() << " grade level" << std::endl;
    else
        o << i.getName() << " is form NOT signed and have " << i.getRequired() << " grade level" << std::endl;

    return o;
}
