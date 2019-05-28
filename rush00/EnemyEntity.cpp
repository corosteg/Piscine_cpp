#include "EnemyEntity.hpp"
#include "BorderInfos.hpp"

EnemyEntity::OneDraw EnemyEntity::_listDraw[] = {
	{ "/MM\\",
	  "|~~|"},

	{ "dOOb",
	  "~||~"},

	{ "{@@}",
	  "/\"\"\\"},
};

EnemyEntity::EnemyEntity(void) : AEntity(-10, std::rand() % (COLS - (6 + BORDER_INFOS_X)) + BORDER_INFOS_X + 3),\
  _die(false), _level(std::rand() % 4), _hp(_level + 1), _height(5), _width(4), _moving(0),\
  _curDraw(EnemyEntity::_listDraw[std::rand() % (sizeof(EnemyEntity::_listDraw)/sizeof(EnemyEntity::_listDraw[0]))])
{
	start_color();
	init_pair(NORMAL, COLOR_WHITE, COLOR_BLACK);
	init_pair(RED, COLOR_RED, COLOR_BLACK);
	init_pair(YELLOW, COLOR_YELLOW, COLOR_BLACK);
	init_pair(GREEN, COLOR_GREEN, COLOR_BLACK);
	return;
}

EnemyEntity::EnemyEntity(EnemyEntity const &src)
{
	*this = src;
	return;
}

EnemyEntity::~EnemyEntity(void)
{
	return;
}

EnemyEntity &	EnemyEntity::operator=(EnemyEntity const &rhs)
{
	if (this != &rhs) {
		this->_hp = rhs.getHP();
	}
	return *this;
}

void    EnemyEntity::updateMove() {
	if (this->_moving == 10)
	{
		_y++;
		this->_moving = 0;
	}
	if (!_die)
		printd();
	this->_moving++;
}

void	EnemyEntity::printd() const {
	if (_y > LINES || _x > COLS) {
		_die = true;
		return ;
	}

	for (int i = 0; i < 2; i++) {
		if ((_y + i >= 0 && _y + i < LINES) && (_x >= 0 && _x < COLS)) {
			move(_y + i, _x);
			attron(COLOR_PAIR(_level));
			if (i == 0)
				printw(_curDraw.head);
			else
				printw(_curDraw.tail);
			attroff(COLOR_PAIR(_level));
		}
	}
}

void	EnemyEntity::takeDamage() {
	_hp--;
	if (_hp <= 0)
		_die = true;
}

int EnemyEntity::getLVL() const { return _level; }
int EnemyEntity::getHP() const { return _hp; }
int EnemyEntity::getWidth() const { return _width; }
int EnemyEntity::getHeight() const { return _height; }
bool EnemyEntity::isDead() const { return _die; }
