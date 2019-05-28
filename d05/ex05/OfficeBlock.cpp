#include "OfficeBlock.hpp"

OfficeBlock::OfficeBlock( void ) {}
 
OfficeBlock::OfficeBlock( Intern* intern, Bureaucrat* signatory, Bureaucrat* executor )
    : _intern(intern),
    _signer(signatory),
    _executor(executor)
{}

OfficeBlock::OfficeBlock( OfficeBlock const & src ) {
   *this = src;
}

OfficeBlock::~OfficeBlock() {}

OfficeBlock &           OfficeBlock::operator=( OfficeBlock const & rhs ) {
    (void)rhs;
    return *this;
}

void                    OfficeBlock::setIntern(Intern* newIntern) {
    this->_intern = newIntern;
}

void                    OfficeBlock::setSigner(Bureaucrat* newSigner) {
    this->_signer = newSigner;
}

void                    OfficeBlock::setExecutor(Bureaucrat* newExecutor) {
    this->_executor = newExecutor;
}


void                    OfficeBlock::doBureaucracy(std::string form_name, std::string target) const {
    if (!_intern)
        throw OfficeBlock::NoIntern();
    else if (!_signer)
        throw OfficeBlock::NoSigner();
    else if (!_executor)
        throw OfficeBlock::NoExecutor();
    else
    {
        Form*   form = this->_intern->makeForm(form_name, target);
        this->_signer->signForm(*form);
        this->_executor->executeForm(*form);
    }
}

// std::ostream &  operator<<( std::ostream & o, OfficeBlock const & i ) {

    // return o;
// }
