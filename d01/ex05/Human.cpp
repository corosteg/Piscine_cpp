#include "Brain.hpp"
#include "Human.hpp"
#include <iostream>

Human::Human() : _brain( Brain() ), _brainRef( this->_brain )
{}

Human::~Human( void )
{}

Brain           Human::getBrain() {
    return this->_brainRef;
}

const Brain*    Human::identify( ) {
    return &this->_brainRef;
}
