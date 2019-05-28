#include "EnemyEvent.hpp"

bool EnemyEvent::_runSrandOnce = false;

EnemyEvent::EnemyEvent(void) : _firstEnemy(NULL)
{
	if (!EnemyEvent::_runSrandOnce) {
		EnemyEvent::_runSrandOnce = true;
		srand(time(NULL));
	}
}

EnemyEvent::EnemyEvent(BorderInfos *borderinfos) : _firstEnemy(NULL), _borderInfos(borderinfos)
{
	if (!EnemyEvent::_runSrandOnce) {
		EnemyEvent::_runSrandOnce = true;
		srand(time(NULL));
	}
}

EnemyEvent::EnemyEvent(EnemyEvent const &src)
{
	*this = src;
	return;
}

EnemyEvent::~EnemyEvent(void)
{
	while (_firstEnemy) {
		EnemyEntity* copy = _firstEnemy;
		_firstEnemy = _firstEnemy->next;
		delete copy;
	}
	return;
}

EnemyEvent &	EnemyEvent::operator=(EnemyEvent const &rhs)
{
	if (!(this == &rhs))
		;
	return *this;
}

void EnemyEvent::remove(EnemyEntity* removeNode) {
	if (_firstEnemy && !_firstEnemy->next) {
		delete _firstEnemy;
		return;
	}
	EnemyEntity* copy = _firstEnemy;

	if (_firstEnemy == removeNode) {
		_firstEnemy = _firstEnemy->next;
		delete copy;
		return;
	}

	while (copy->next != removeNode) {
		copy = copy->next;
	}
	if (copy->next->next) {
		EnemyEntity* temp = copy->next;
		copy->next = copy->next->next;
		delete temp;
	} else {
		delete copy->next;
	}
}

void EnemyEvent::add(EnemyEntity* newNode) {
	if (!_firstEnemy) {
		_firstEnemy = newNode;
		_firstEnemy->next = NULL;
		return;
	}
	EnemyEntity* copy = _firstEnemy;
	while (copy->next)
		copy = copy->next;
	copy->next = newNode;
	copy->next->next = NULL;
}

bool EnemyEvent::collision(int y, int x) {
	EnemyEntity* copy = _firstEnemy;

	while(copy)
	{
		if (x >= copy->getX() && x < copy->getX() + copy->getWidth()
			&& y > copy->getY() + 2 && y < copy->getY() + copy->getHeight())
			{
				_borderInfos->AddPoints(1);
				copy->takeDamage();
				if (copy->isDead()) {
					_borderInfos->AddKill();
					_borderInfos->AddPoints(copy->getLVL());
					remove(copy);
				}
				return true;
			}
		copy = copy->next;
	}
	return false;
}

void EnemyEvent::Update() {
	if (!_firstEnemy) {
		return; }

	EnemyEntity* copy = _firstEnemy;

	while (copy) {
		copy->updateMove();
		if (copy->isDead()) {
			EnemyEntity* temp = copy;
			copy = copy->next;
			remove(temp);
		}
		else
			copy = copy->next;
	}
}

void EnemyEvent::newEnemyEntity() {
	EnemyEntity* newEnemyEntity = new EnemyEntity();
	add(newEnemyEntity);
	return ;
}
