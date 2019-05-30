#include "Array.hpp"

void        test()
{
    Array<int>     arr2( 5 );

    for(int i = 0; i < 10; i++)
    try
    {
        std::cout << arr2[i] << std::endl;
    }
    catch (OutOfArray<void>& e)
    {
        std::cout << e.what() << std::endl;
    }
    catch (std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }

}

int         main()
{
    test();
    
    return 0;    
}