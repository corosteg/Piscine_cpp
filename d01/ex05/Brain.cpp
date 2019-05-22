#include "Brain.hpp"

Brain::Brain( void )
{}

Brain::~Brain( void )
{}

std::string Brain::identify() {
    std::stringstream	ss;
	ss << (void *)this;
	std::string str = ss.str();
	return (str);
}
