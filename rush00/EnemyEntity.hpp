#ifndef ENEMY_CLASS_HPP
# define ENEMY_CLASS_HPP

#include <iostream>
#include <string>
#include <ncurses.h>
#include <unistd.h>
#include "AEntity.hpp"
#include <stdlib.h>
#include <ctime>
#include <stdio.h>
#include <random>

class EnemyEntity : public AEntity
{
	private:
		struct OneDraw {
			const char* head;
			const char* tail;
		};
		static OneDraw _listDraw[3];

		mutable bool _die;
		int _level;
		int _hp;
		int _height;
		int _width;
		int	_moving;
		OneDraw _curDraw;
		int getRandom();

	protected:

	public:
		EnemyEntity(void);
		EnemyEntity(EnemyEntity const &src);
		~EnemyEntity(void);
		virtual void    updateMove();

		EnemyEntity &	operator=(EnemyEntity const &rhs);

		void	printd() const;
		void	takeDamage();
		EnemyEntity* next;

		int getHP() const;
		int getLVL() const;
		int getWidth() const;
		int getHeight() const;
		bool isDead() const;
};
#define NORMAL 0
#define GREEN 1
#define YELLOW 2
#define RED 3

#endif
