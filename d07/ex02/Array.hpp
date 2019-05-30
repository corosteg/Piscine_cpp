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
        : _arr(new T[0]),
        _size(0)
    {};
    
    Array(unsigned int n)
        : _arr(new T[n]()),
        _size(n)
    {};
    
    ~Array() {delete [] _arr;};

    size_t      size() {return _size;}

    T &         operator[]( size_t index ) {
        if (_size == 0)
            throw OutOfArray<void>();
        else if (index > _size - 1)
            throw OutOfArray<void>();
        else
            return _arr[index];
    }

    void        operator=( Array & rhs ) {
        delete [] this->_arr;
        this->_arr = new T[rhs.size()];
        this->_size = rhs.size();
        for (size_t i = 0; i < rhs.size() ; i++)
            this->_arr[i] = rhs[i];
    }

private:

    T           *_arr;
    size_t      _size;


};

#endif
