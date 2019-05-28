#include "Player.hpp"
#include "BorderInfos.hpp"

Player::Player()
{}

Player::Player(int y, int x) : AEntity( y, x )
{}

Player::Player( Player const & src )
{
    *this = src;

    return;
}

Player::~Player()
{}

Player &       Player::operator=( Player const & rhs )
{
    this->_x = rhs.getX();
    this->_y = rhs.getY();

    return *this;
}

int             Player::getX() const
{
    return this->_x;
}

int             Player::getY() const
{
    return this->_y;
}

void            Player::updateXY(int key)
{
    if( key == KEY_LEFT && _x > BORDER_INFOS_X + 1)
        this->_x--;
    if( key == KEY_RIGHT && _x + 8 < COLS)
        this->_x++;
}

void            Player::updateMove()
{
    move(this->_y - 4, this->_x);
	printw("   /\\ ");
	move(this->_y - 3, this->_x);
	printw("  (  )");
	move(this->_y - 2, this->_x);
    printw("  (  )");
    move(this->_y - 1, this->_x);
    printw(" /|/\\|\\");
	move(this->_y, this->_x);
    printw("/_||||_\\");
}
