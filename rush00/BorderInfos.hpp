#ifndef BORDERINFOS_CLASS_HPP
# define BORDERINFOS_CLASS_HPP

#include <iostream>
#include <string>
#include <ncurses.h>
#include <sstream>

class BorderInfos
{
	private:
		int static _bestTime;
		int static _bestScore;
		int static _bestNbKill;

		int _time;
		int _score;
		int _nbKill;
		int _tickTime;
	protected:

	public:
		BorderInfos(void);
		BorderInfos(BorderInfos const &src);
		~BorderInfos(void);

		void DrawInfos();
		void AddPoints(int points);
		void AddKill();

		void setBestTime(int time);
		void setBestScore(int score);
		void setBestKill(int kill);

		int getTime() const;
		int getScore() const;
		int getKill() const;
		
		BorderInfos &	operator=(BorderInfos const &rhs);
};

#define BORDER 5
#define BORDER_INFOS_X 19
#define BORDER_INFOS_Y 10
//std::ostream &	operator<<(std::ostream &o, BorderInfos const &rhs);

#endif
