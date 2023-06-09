// This file simply demonstrates the different special characters you can use for your game

#include <ncurses.h>

int main(void)
{
    initscr();
    attron(A_UNDERLINE);
    mvprintw(0,7,"NCURSES EXTENDED CHARACTERS\n");
    attroff(A_UNDERLINE);
    printw("Upper left corner         "); addch(ACS_ULCORNER); printw("  ACS_ULCORNER\n"); 
    printw("Lower left corner         "); addch(ACS_LLCORNER); printw("  ACS_LLCORNER\n");
    printw("Upper right corner        "); addch(ACS_URCORNER); printw("  ACS_URCORNER\n");
    printw("Lower right corner        "); addch(ACS_LRCORNER); printw("  ACS_LRCORNER\n");
    printw("Tee pointing right        "); addch(ACS_LTEE); printw("  ACS_LTEE\n");
    printw("Tee pointing left         "); addch(ACS_RTEE); printw("  ACS_RTEE\n");
    printw("Tee pointing up           "); addch(ACS_BTEE); printw("  ACS_BTEE\n");
    printw("Tee pointing down         "); addch(ACS_TTEE); printw("  ACS_TTEE\n");
    printw("Horizontal line           "); addch(ACS_HLINE); printw("  ACS_HLINE\n");
    printw("Vertical line             "); addch(ACS_VLINE); printw("  ACS_VLINE\n");
    printw("Large Plus or cross over  "); addch(ACS_PLUS); printw("  ACS_PLUS\n");
    printw("Scan Line 1               "); addch(ACS_S1); printw("  ACS_S1\n");
    printw("Scan Line 3               "); addch(ACS_S3); printw("  ACS_S3\n");
    printw("Scan Line 7               "); addch(ACS_S7); printw("  ACS_S7\n");
    printw("Scan Line 9               "); addch(ACS_S9); printw("  ACS_S9\n");
    printw("Diamond                   "); addch(ACS_DIAMOND); printw("  ACS_DIAMOND\n");
    printw("Checker board (stipple)   "); addch(ACS_CKBOARD); printw("  ACS_CKBOARD\n");
    printw("Degree Symbol             "); addch(ACS_DEGREE); printw("  ACS_DEGREE\n");
    printw("Plus/Minus Symbol         "); addch(ACS_PLMINUS); printw("  ACS_PLMINUS\n");
    printw("Bullet                    "); addch(ACS_BULLET); printw("  ACS_BULLET\n");
    printw("Arrow Pointing Left       "); addch(ACS_LARROW); printw("  ACS_LARROW\n");
    printw("Arrow Pointing Right      "); addch(ACS_RARROW); printw("  ACS_RARROW\n");
    printw("Arrow Pointing Down       "); addch(ACS_DARROW); printw("  ACS_DARROW\n");
    printw("Arrow Pointing Up         "); addch(ACS_UARROW); printw("  ACS_UARROW\n");
    printw("Board of squares          "); addch(ACS_BOARD); printw("  ACS_BOARD\n");
    printw("Lantern Symbol            "); addch(ACS_LANTERN); printw("  ACS_LANTERN\n");
    printw("Solid Square Block        "); addch(ACS_BLOCK); printw("  ACS_BLOCK\n");
    printw("Less/Equal sign           "); addch(ACS_LEQUAL); printw("  ACS_LEQUAL\n");
    printw("Greater/Equal sign        "); addch(ACS_GEQUAL); printw("  ACS_GEQUAL\n");
    printw("Pi                        "); addch(ACS_PI); printw("  ACS_PI\n");
    printw("Not equal                 "); addch(ACS_NEQUAL); printw("  ACS_NEQUAL\n");
    printw("UK pound sign             "); addch(ACS_STERLING); printw("  ACS_STERLING\n\n");
    refresh();
    getch();
    endwin();
    return 0;
}

