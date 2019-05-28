#include "BorderInfos.hpp"

int BorderInfos::_bestTime = 0;
int BorderInfos::_bestScore = 0;
int BorderInfos::_bestNbKill = 0;


BorderInfos::BorderInfos(void) : _time(0), _score(0), _nbKill(0), _tickTime(0)
{
	start_color();
	init_pair(BORDER, COLOR_WHITE, COLOR_WHITE);
	return;
}

BorderInfos::BorderInfos(BorderInfos const &src)
{
	*this = src;
	return;
}

BorderInfos::~BorderInfos(void)
{
	return;
}

BorderInfos &	BorderInfos::operator=(BorderInfos const &rhs)
{
	if (this != &rhs)
		;
	return *this;
}

void BorderInfos::DrawInfos() {
	attron(COLOR_PAIR(BORDER));
	for (int i = 0; i <= LINES; i++) {
		move(i, BORDER_INFOS_X);
		printw("#");
	}

	attroff(COLOR_PAIR(BORDER));
	attron(COLOR_PAIR(0));

	if (_tickTime >= 50) {
		_tickTime = 0;
		_time++;
	}
	_tickTime++;

	move(LINES - 1 ,0);
	printw("Press ESC to quit.");
	move(1,0);
	std::stringstream buf;
	buf << _score;
	std::string str = "Score:" + buf.str();
	printw(str.c_str());
	buf.str("");
	move(2,0);
	buf << _nbKill;
	str = "Kills:" + buf.str();
	printw(str.c_str());
	buf.str("");
	move(3,0);
	buf << _time;
	str = "Time:" + buf.str() +"s";
	printw(str.c_str());
	buf.str("");

	move(5,0);
	buf << _bestScore;
	str = "Best Score:" + buf.str();
	printw(str.c_str());
	buf.str("");

	move(6,0);
	buf << _bestNbKill;
	str = "Best Kill:" + buf.str();
	printw(str.c_str());
	buf.str("");

	move(7,0);
	buf << _bestTime;
	str = "Best Time:" + buf.str() +"s";
	printw(str.c_str());
	buf.str("");

	move(9,0);
	printw("1 Point");
	attroff(COLOR_PAIR(0));

	move(10,0);
	attron(COLOR_PAIR(1));
	printw("2 Points");
	attroff(COLOR_PAIR(1));

	move(11,0);
	attron(COLOR_PAIR(2));
	printw("3 Points");
	attroff(COLOR_PAIR(2));

	move(12,0);
	attron(COLOR_PAIR(3));
	printw("4 Points");
	attroff(COLOR_PAIR(3));
	attron(COLOR_PAIR(0));
}

void BorderInfos::AddPoints(int points) {
	// std::cout << "..." << std::endl;
	_score += points;
}
void BorderInfos::AddKill() {
	_nbKill++;
}

void BorderInfos::setBestTime(int time) {
	_bestTime = time;
}
void BorderInfos::setBestScore(int score) {
	_bestScore = score;
}
void BorderInfos::setBestKill(int kill) {
	_bestNbKill = kill;
}

int BorderInfos::getTime() const { return _time; }
int BorderInfos::getScore() const { return _score; }
int BorderInfos::getKill() const { return _nbKill; }
