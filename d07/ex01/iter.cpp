#include <iostream>

template< typename T >
void    iter(T* const arr, int len, void (*f)(T)) {
    for (int i = 0; i < len; i++)
        f(arr[i]);
}

template< typename T>
void    test(T elem)
{
    std::cout << elem << "  ---- in test ---- ";
}

int     main()
{
    std::string         arr_char[3] = {"hello", "world", "Peace"};
    int                 arr_int[] = {42, 21, 7};
    float               arr_float[] = {4.2, 21.2, 42.21};
    
    ::iter<std::string>(arr_char, 3, test);
    std::cout << std::endl;
    ::iter<int>(arr_int, 3, test);
    std::cout << std::endl;
    ::iter<float>(arr_float, 3, test);
    std::cout << std::endl;

    return 0;
}