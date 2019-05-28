#ifndef OFFICEBLOCK_H
#define OFFICEBLOCK_H
#include <iostream>
#include "Intern.hpp"
#include "Bureaucrat.hpp"
 
class OfficeBlock {
 
public:

    class NoIntern : public std::exception {
        public:
            virtual const char* what() const throw()
            {
                return ("Office need recruit an intern for do that");
            }
    };

    class NoSigner : public std::exception {
        public:
            virtual const char* what() const throw()
            {
                return ("Office need recruit a Signer bureaucrat for do that");
            }
    };

    class NoExecutor : public std::exception {
        public:
            virtual const char* what() const throw()
            {
                return ("Office need recruit an Executor bureaucrat for do that");
            }
    };

    OfficeBlock ( void );
    OfficeBlock ( Intern* intern, Bureaucrat* signatory, Bureaucrat* executor );
    ~OfficeBlock ( void );

    void                doBureaucracy(std::string form_name, std::string target) const;
    void                setIntern(Intern* newIntern);
    void                setSigner(Bureaucrat* newSigner);
    void                setExecutor(Bureaucrat* newExecutor);

private:

    OfficeBlock ( OfficeBlock const & src );
    
    OfficeBlock&    operator=( OfficeBlock const & rhs );

    Intern*             _intern;
    Bureaucrat*         _signer;
    Bureaucrat*         _executor;
 
};
 
// std::ostream &  operator<<( std::ostream & o, OfficeBlock const & i);
 
#endif
