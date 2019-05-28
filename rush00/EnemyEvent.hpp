#ifndef ENEMYEVENT_CLASS_HPP
# define ENEMYEVENT_CLASS_HPP

#include "EnemyEntity.hpp"
#include "BorderInfos.hpp"

class EnemyEvent
{
	private:
		static bool _runSrandOnce;
		EnemyEntity* _firstEnemy;
		BorderInfos* _borderInfos;

	protected:

	public:
		EnemyEvent(void);
		EnemyEvent(BorderInfos *);
		EnemyEvent(EnemyEvent const &src);
		~EnemyEvent(void);

		void newEnemyEntity();
		void remove(EnemyEntity* removeNode);
		void add(EnemyEntity* newNode);
		void Update();

		bool collision(int y, int x);
		EnemyEvent &	operator=(EnemyEvent const &rhs);
};

#endif
