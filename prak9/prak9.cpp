#include <ncurses/ncurses.h>
#include <string>
using namespace std;

int main() {
	int x = 10, y = 10;
	int ch;
	initscr();
	raw();
	keypad(stdscr, TRUE);
	noecho();
	mvprintw(0, 0, "Gunakan tombol panah untuk menggerakan teks. Tekan 'q' untuk keluar.");
	
	while((ch = getch() != 'q')) {
		clear();
		refresh();
		mvprintw(0, 0, "Gunakan tombol panah untuk menggerakan teks. Tekan 'q' untuk keluar.");
		
		switch(ch) {
			case KEY_UP:
				y = (y > 0) ? y - 1 : y;
				break;
			case KEY_DOWN:
			    y = (y < LINES - 1) ? y + 1 : y;
				break;
			case KEY_LEFT:
			    x = (x > 0) ? x - 1 : x;
				break;
			case KEY_RIGHT:
			    x = (x < COLS - 1) ? x + 1 : x;
				break;
		}
		
		string xTemp = to_string(x);
		string yTemp = to_string(y);
		string chTemp = to_string(ch);
		
		mvprintw(1, 0, "x : ");
		mvprintw(1, 4, xTemp.c_str());
		
		mvprintw(2, 0, "y : ");
		mvprintw(2, 4, yTemp.c_str());
		
		mvprintw(3, 0, "in : ");
		mvprintw(3, 4, chTemp.c_str());
		
		mvprintw(y, x, "X");
		
		refresh();
	}
	endwin();
	
	return 0;
}