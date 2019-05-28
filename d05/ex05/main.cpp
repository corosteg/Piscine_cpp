#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "OfficeBlock.hpp"

int         main()
{
    Intern                  intern;
    Bureaucrat              bulbizarre("bulbizarre", 150);
    Bureaucrat              anderson("anderson", 2);
    Bureaucrat              root("ROOT", 1);
    OfficeBlock             ob;
    OfficeBlock             ob2(&intern, &anderson, &root);
    OfficeBlock             ob3;

    // All office mens with all rights
    ob2.doBureaucracy("shrubbery creation", "bender");
    ob2.doBureaucracy("robotomy request", "bender");
    ob2.doBureaucracy("presidential pardon", "bender");
    std::cout << std::endl;
    
    // Signer with bad rigths
    ob.setIntern(&intern);
    ob.setSigner(&bulbizarre);
    ob.setExecutor(&root);
    ob.doBureaucracy("shrubbery creation", "bender");
    ob.doBureaucracy("robotomy request", "bender");
    ob.doBureaucracy("presidential pardon", "bender");
    std::cout << std::endl;
    
    // Executor with bad rights
    ob.setIntern(&intern);
    ob.setSigner(&root);
    ob.setExecutor(&bulbizarre);
    ob.doBureaucracy("shrubbery creation", "bender");
    ob.doBureaucracy("robotomy request", "bender");
    ob.doBureaucracy("presidential pardon", "bender");
    std::cout << std::endl;

    //Do bureaucratie without office mens
    try
    {
        ob3.doBureaucracy("presidential pardon", "bender");
    }
    catch(OfficeBlock::NoIntern& e)
    {
        std::cout << e.what() << std::endl;
    }
    catch(OfficeBlock::NoSigner& e)
    {
        std::cout << e.what() << std::endl;
    }
    catch(OfficeBlock::NoExecutor& e)
    {
        std::cout << e.what() << std::endl;
    }

    //Do bureaucratie with just an intern
    try
    {
        ob3.setIntern(&intern);
        ob3.doBureaucracy("presidential pardon", "bender");
       
    }
    catch(OfficeBlock::NoIntern& e)
    {
        std::cout << e.what() << std::endl;
    }
    catch(OfficeBlock::NoSigner& e)
    {
        std::cout << e.what() << std::endl;
    }
    catch(OfficeBlock::NoExecutor& e)
    {
        std::cout << e.what() << std::endl;
    }

    //Do bureaucratie without Executor
    try
    {
        ob3.setSigner(&anderson);
        ob3.doBureaucracy("presidential pardon", "bender");
       
    }
    catch(OfficeBlock::NoIntern& e)
    {
        std::cout << e.what() << std::endl;
    }
    catch(OfficeBlock::NoSigner& e)
    {
        std::cout << e.what() << std::endl;
    }
    catch(OfficeBlock::NoExecutor& e)
    {
        std::cout << e.what() << std::endl;
    }

    //Do bureaucratie with All office
    try
    {
        ob3.setExecutor(&root);
        ob3.doBureaucracy("presidential pardon", "bender");
    }
    catch(OfficeBlock::NoIntern& e)
    {
        std::cout << e.what() << std::endl;
    }
    catch(OfficeBlock::NoSigner& e)
    {
        std::cout << e.what() << std::endl;
    }
    catch(OfficeBlock::NoExecutor& e)
    {
        std::cout << e.what() << std::endl;
    }
    

}