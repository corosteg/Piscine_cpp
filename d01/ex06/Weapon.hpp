#ifndef WEAPON_H
# define WEAPON_H
#include <iostream>

class Weapon {

    public:

        std::string     str;
        std::string&    ref;

        Weapon( std::string input );
        ~Weapon();

        std::string&    getType();
        void            setType( std::string str );

};

#endif
