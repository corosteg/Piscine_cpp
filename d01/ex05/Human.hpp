#ifndef HUMAN_H
# define HUMAN_H
#include "Brain.hpp"

class Human {

public:


    Human( void );
    ~Human( void );

    Brain           getBrain();
    const Brain*    identify();

private:

    const Brain     _brain;
    const Brain&    _brainRef;

};

#endif
