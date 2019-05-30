#include <iostream>

template< typename T >
T const &      min( T const & x, T const & y ) {
    return ( (x<y) ? x : y );
}

template< typename T >
T const &     max( T const & x, T const & y ) {
    return ( (x>y) ? x : y );
}

template< typename T >
void    swap( T & x, T & y ) {
    T   tmp;
    tmp = x;
    x = y;
    y = tmp;
}

int     main()
{
    int             a = 42;
    int             a2 = 42;
    int             b = 21;
    float           c = 42.90;
    float           c2 = 42.90;
    float           d = 21.39;
    double          e = 21.0;
    double          f = 42.0;
    double          f2 = 42.0;
    std::string     str1 = "hello";
    std::string     str2 = "bye";

    std::cout << "MIN" << std::endl;
    std::cout << min<int>(a, b) << std::endl;
    std::cout << min<float>(c, d) << std::endl;
    std::cout << min<double>(e, f) << std::endl << std::endl;

    std::cout << "MIN with same values" << std::endl;
    std::cout << &a2 << std::endl;
    std::cout << &min<int>(a, a2) << std::endl;
    std::cout << &c2 << std::endl;
    std::cout << &min<float>(c, c2) << std::endl;
    std::cout << &f2 << std::endl;
    std::cout << &min<double>(f, f2) << std::endl << std::endl;

    std::cout << "MAX" << std::endl;
    std::cout << max<int>(a, b) << std::endl;
    std::cout << max<float>(c, d) << std::endl;
    std::cout << max<double>(e, f) << std::endl << std::endl;

    std::cout << "MAX with same values" << std::endl;
    std::cout << &a2 << std::endl;
    std::cout << &min<int>(a, a2) << std::endl;
    std::cout << &c2 << std::endl;
    std::cout << &min<float>(c, c2) << std::endl;
    std::cout << &f2 << std::endl;
    std::cout << &min<double>(f, f2) << std::endl << std::endl;

    swap<int>(a, b);
    std::cout << e << std::endl;
    std::cout << f << std::endl << std::endl;


    swap<double>(e, f);
    std::cout << e << std::endl;
    std::cout << f << std::endl << std::endl;

    swap<char>(str1, str2);
    std::cout << str1 << std::endl;
    std::cout << str2 << std::endl;

    return 0;
}