#include <stdio.h>
int main()
{
    const int ROWS = 5;
    const int COLS = 5;
    const char WALL = 'W';
    const char FLOOR = 'F';

    char tilemap[ROWS][COLS] = {
        {WALL, WALL, WALL, WALL, WALL},
        {WALL, FLOOR, FLOOR, FLOOR, WALL},
        {WALL, FLOOR, WALL, FLOOR, WALL},
        {WALL, FLOOR, FLOOR, FLOOR, WALL},
        {WALL, WALL, WALL, WALL, WALL}
    };

    for (int r = 0; r < ROWS; r++) {
    for (int c = 0; c < COLS; c++) {
        char ch = tilemap[r][c] == WALL ? '#' : '.';
        printf("%c ", ch);
        }
    printf("\n");
    }

    for (int row = 1; row <= 5; row++) {
    for (int col = 1; col <= 5; col++) {
        printf("%4d", row * col);
        }
    printf("\n");
    }   
}