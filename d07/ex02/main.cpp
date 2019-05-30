#include "Array.hpp"
#include <unistd.h> // for sleep for test leaks, line 246

void        testInt()
{
    Array<int>      arr1( 5 );
    Array<int>      arr2;

    arr1[1] = 42;
    arr1[4] = 21;

    std::cout << "-----   TEST INT -----" << std::endl;
    for(int i = 0; i < 10; i++)
    try
    {
        std::cout << "arr1[i] = " << arr1[i] << "; address of arr1[i] = ";
        std::cout << &arr1[i] << std::endl;
    }
    catch (OutOfArray<void>& e)
    {
        std::cout << e.what() << std::endl;
    }
    catch (std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << std::endl;
    std::cout << "arr2" << std::endl;

    for(int i = 0; i < 3; i++)
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

    std::cout << std::endl;
    arr2 = arr1;
    std::cout << "arr2 = arr1" << std::endl;

    for (int i = 0; i < 5; i++)
    try
    {
        std::cout << "arr2[i] = " << arr2[i] << "; address of arr2[i] = ";
        std::cout << &arr2[i] << std::endl;
    }
    catch (OutOfArray<void>& e)
    {
        std::cout << e.what() << std::endl;
    }
    catch (std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << std::endl;

    for(size_t i = 0; i < arr1.size(); i++)
    try
    {
        std::cout << "arr1[i] = " << arr1[i] << "; address of arr1[i] = ";
        std::cout << &arr1[i] << std::endl;
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

void        testFloat()
{
    Array<float>      arr1( 5 );
    Array<float>      arr2;

    arr1[1] = 42;
    arr1[4] = 21;

    std::cout << "-----   TEST FLOAT -----" << std::endl;
    for(int i = 0; i < 10; i++)
    try
    {
        std::cout << "arr1[i] = " << arr1[i] << "; address of arr1[i] = ";
        std::cout << &arr1[i] << std::endl;
    }
    catch (OutOfArray<void>& e)
    {
        std::cout << e.what() << std::endl;
    }
    catch (std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << std::endl;
    std::cout << "arr2" << std::endl;

    for(int i = 0; i < 3; i++)
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

    std::cout << std::endl;
    arr2 = arr1;
    std::cout << "arr2 = arr1" << std::endl;

    for (int i = 0; i < 5; i++)
    try
    {
        std::cout << "arr2[i] = " << arr2[i] << "; address of arr2[i] = ";
        std::cout << &arr2[i] << std::endl;
    }
    catch (OutOfArray<void>& e)
    {
        std::cout << e.what() << std::endl;
    }
    catch (std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << std::endl;

    for(size_t i = 0; i < arr1.size(); i++)
    try
    {
        std::cout << "arr1[i] = " << arr1[i] << "; address of arr1[i] = ";
        std::cout << &arr1[i] << std::endl;
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

void        testString()
{
    Array<std::string>      arr1( 5 );
    Array<std::string>      arr2;

    arr1[1] = "42";
    arr1[4] = "Hello";

    std::cout << "-----   TEST STRING -----" << std::endl;
    for(int i = 0; i < 10; i++)
    try
    {
        std::cout << "arr1[i] = " << arr1[i] << "; address of arr1[i] = ";
        std::cout << &arr1[i] << std::endl;
    }
    catch (OutOfArray<void>& e)
    {
        std::cout << e.what() << std::endl;
    }
    catch (std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << std::endl;
    std::cout << "arr2" << std::endl;

    for(int i = 0; i < 3; i++)
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

    std::cout << std::endl;
    arr2 = arr1;
    std::cout << "arr2 = arr1" << std::endl;

    for (int i = 0; i < 5; i++)
    try
    {
        std::cout << "arr2[i] = " << arr2[i] << "; address of arr2[i] = ";
        std::cout << &arr2[i] << std::endl;
    }
    catch (OutOfArray<void>& e)
    {
        std::cout << e.what() << std::endl;
    }
    catch (std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << std::endl;

    for(size_t i = 0; i < arr1.size(); i++)
    try
    {
        std::cout << "arr1[i] = " << arr1[i] << "; address of arr1[i] = ";
        std::cout << &arr1[i] << std::endl;
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
    testInt();
    std::cout << std::endl << std::endl;
    testFloat();
    std::cout << std::endl << std::endl;
    testString();

    sleep(10); // for testing if leaks (but it don't have leaks ;) )

    return 0;    
}