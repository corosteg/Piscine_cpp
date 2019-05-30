#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>

template< typename U >
class OutOfArray : public std::exception {
    public:
        virtual const char* what() const throw()
        {
            return ("You'r out of Array!! That's Bad, Reallly Bad!! ヽ(ಠ_ಠ)ノ");
        }
};

template< typename T >
class Array {

public:


    Array( void )
    {};
    
    Array(unsigned int n)
        : _arr(new T[n]()),
        _size(n)
    {};
    
    ~Array() {delete [] _arr;};

    size_t      size() {return _size;}

    T &         operator[]( size_t index ) {
        if (index > _size - 1)
            throw OutOfArray<void>();
        else
            return _arr[index];
    }

// private:

    T           *_arr;
    size_t      _size;


};

#endif
