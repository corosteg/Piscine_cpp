/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corosteg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/25 15:46:37 by corosteg          #+#    #+#             */
/*   Updated: 2019/05/28 23:11:06 by corosteg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Player.hpp"
#include "unistd.h"
#include "Shoot.hpp"
#include "ShootEvent.hpp"
#include "EnemyEvent.hpp"

#define  FRAME_BASE 20000

void        printGameOver()
{
    start_color();

    init_pair(1, COLOR_RED, COLOR_BLACK);
    attron(COLOR_PAIR(1));
    mvprintw(20, 20, "      _____          __  __ ______    ______      ________ _____  _       ");
    mvprintw(21, 20, "     / ____|   /\\   |  \\/  |  ____|  / __ \\ \\    / /  ____|  __ \\| |      ");
    mvprintw(22, 20, "    | |  __   /  \\  | \\  / | |__    | |  | \\ \\  / /| |__  | |__) | |      ");
    mvprintw(23, 20, "    | | |_ | / /\\ \\ | |\\/| |  __|   | |  | |\\ \\/ / |  __| |  _  /| |      ");
    mvprintw(24, 20, "    | |__| |/ ____ \\| |  | | |____  | |__| | \\  /  | |____| | \\ \\|_|      ");
    mvprintw(25, 20, "     \\_____/_/    \\_\\_|  |_|______|  \\____/   \\/   |______|_|  \\_(_)      ");
    mvprintw(26, 20, " ________________________________________________________________________ ");
    mvprintw(27, 20, "|________________________________________________________________________|");
    attroff(COLOR_PAIR(1));

    init_pair(2, COLOR_GREEN, COLOR_BLACK);
    attron(COLOR_PAIR(2));
    mvprintw(30, 22, "PRESS \"ESC\" KEY TO QUIT");
    mvprintw(32, 22, "OR PRESS SPACE BAR TO RESTART (MORE FUN)");
    attroff(COLOR_PAIR(2));
}

void        begin(int y, int x)
{
    start_color();

    init_pair(1, COLOR_GREEN, COLOR_BLACK);
    attron(COLOR_PAIR(1));
    mvprintw(y, x, " _______ .___________.     .______       _______ .___________..______        ______           ");
    mvprintw(y + 1, x, "|   ____||           |     |   _  \\     |   ____||           ||   _  \\      /  __  \\   ");
    mvprintw(y + 2, x, "|  |__   `---|  |----`     |  |_)  |    |  |__   `---|  |----`|  |_)  |    |  |  |  |     ");
    mvprintw(y + 3, x, "|   __|      |  |          |      /     |   __|      |  |     |      /     |  |  |  |     ");
    mvprintw(y + 4, x, "|  |         |  |          |  |\\  \\----.|  |____     |  |     |  |\\  \\----.|  `--'  | ");
    mvprintw(y + 5, x, "|__|         |__|     _____| _| `._____||_______|    |__|     | _| `._____| \\______/     ");
    mvprintw(y + 6, x, "                     |______|                                                             ");
    mvprintw(y + 7, x, "    ________________________________________________________________________              ");
    mvprintw(y + 8, x, "   |________________________________________________________________________|             ");
    mvprintw(y + 9, x, "                                                                                          ");
    mvprintw(y + 10, x, "           .                   ~+                                                        ");
    mvprintw(y + 11, x, "           ;           *                                        +                        ");
    mvprintw(y + 12, x, "       - --+- -            +           *       +           *                             ");
    mvprintw(y + 13, x, "           !                     '                  |                                    ");
    mvprintw(y + 14, x, "           .                 ()    .-.,=\"``\"=.    - o -       '                        ");
    mvprintw(y + 15, x, "                       *           '=/_       \\     |        *                          ");
    mvprintw(y + 16, x, "                                *   |  '=._    |                  ,                      ");
    mvprintw(y + 17, x, "                   '      `          \\     `=./`,        '    .                         ");
    mvprintw(y + 18, x, "                '                 .   '=.__.=' `='      *     ,                          ");
    mvprintw(y + 19, x, "              .          +                         +              *                      ");
    mvprintw(y + 20, x, "                              O      *        '       .     '                            ");
    attroff(COLOR_PAIR(1));
    
    init_pair(2, COLOR_MAGENTA, COLOR_BLACK);
    attron(COLOR_PAIR(2));
    mvprintw(y + 22, x, "                                                                                         ");
    mvprintw(y + 23, x, "                                                                                         ");
    mvprintw(y + 24, x, "                                                           by corosteg and anhuang       ");    
    mvprintw(y + 25, x, "                                                                                         ");
    attroff(COLOR_PAIR(2));
}

void        printBegin()
{
    int     y = LINES - 8;
    int     x = COLS / 2 - 53;
    while(y >= 0)
    {
        begin(y, x);
        y--;
        usleep(200000);
        if (getch() != -1)
            break;
        refresh();
    }
}

bool        playerCollisionCheck(Player* player, EnemyEvent* eventEnemy)
{
    if (eventEnemy->collision(player->getY() + 3, player->getX() + 0)
        || eventEnemy->collision(player->getY() + 3, player->getX() + 7)
        || eventEnemy->collision(player->getY() + 2, player->getX() + 1)
        || eventEnemy->collision(player->getY() + 2, player->getX() + 6)
        || eventEnemy->collision(player->getY() + 1, player->getX() + 2)
        || eventEnemy->collision(player->getY() + 1, player->getX() + 5)
        || eventEnemy->collision(player->getY() - 0, player->getX() + 2)
        || eventEnemy->collision(player->getY() - 0, player->getX() + 5)
        || eventEnemy->collision(player->getY() - 1, player->getX() + 3)
        || eventEnemy->collision(player->getY() - 1, player->getX() + 5))
        return true;
    return false;
}

void        core()
{
    WINDOW  *menu_win;
    int     c;
    int     shootNow = 0;
    int     newEnemy = 0;

    keypad(stdscr, true);
    noecho();
    nodelay(stdscr, true);
    menu_win = newwin(LINES, COLS, 0, 0);

	BorderInfos     borderinfos;
    EnemyEvent      eventEnemy(&borderinfos);
    Player          player(LINES - 2, COLS / 2);
    ShootEvent      shootEvent(&player, &eventEnemy);

    while(true)
    {
        c = getch();
        player.updateXY(c);
        player.updateMove();
        eventEnemy.Update();

        if (newEnemy == 10)
        {
            eventEnemy.newEnemyEntity();
            newEnemy = 0;
        }

        if (shootNow == 10)
        {
            shootEvent.newShoot();
            shootNow = 0;
        }

        shootEvent.updateShoots();

        if (playerCollisionCheck(&player, &eventEnemy) || c == 27) {
			borderinfos.DrawInfos();
			borderinfos.setBestTime(borderinfos.getTime());
			borderinfos.setBestScore(borderinfos.getScore());
			borderinfos.setBestKill(borderinfos.getKill());
            break;
		}

		borderinfos.DrawInfos();
        shootNow++;
        newEnemy++;
        refresh();
        usleep(FRAME_BASE);
        erase();
    }
    printGameOver();
}

int			main()
{
    int     input = 32;

    initscr();
    curs_set(0);
    nodelay(stdscr, true);
    printBegin();
    while(input == 32)
    {
        core();
        nodelay(stdscr, false);
        input = 0;
        while(input != 27 && input != 32)
        {
            input = getch();
            refresh();
        }
    }


    endwin();

    return 0;
}
