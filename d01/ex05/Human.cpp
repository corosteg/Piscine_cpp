#include "Brain.hpp"
#include "Human.hpp"

Human::Human() : _brain( new Brain )
{}

Human::~Human( void )
{
    // delete this->_brain;
}

Brain*      Human::getBrain() {
    // const Brain*    address = this->_brain;

    // const Brain&    test = *address;
    // test.test();
    // this->_brain->test();

    return this->_brain;
}

Brain*      Human::identify( ) {
    // const Brain*    address = this->_brain;
    return this->_brain;
}
