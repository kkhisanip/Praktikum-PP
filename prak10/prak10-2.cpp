#include <ncurses/ncurses.h>
#include <windows.h>
using namespace std;

int main() {
	initscr();
	
	for(int i = 0; i < 3; i++) {
		mvprintw(26, 50, "Loading...");
		mvprintw(27, 50, "--------------------");
		mvprintw(28, 50, "|                  |");
		mvprintw(29, 50, "--------------------");
		
		for (int f = 1; f < 18; f++) {
			mvprintw(28, 50 + f, "$");
			refresh();
			Sleep(500);
		}
	}
	
	endwin();
	return 0;
}