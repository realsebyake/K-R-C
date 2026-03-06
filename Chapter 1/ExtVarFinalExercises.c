// 1.10 Exercises
#include <stdio.h>

#define TABSIZE 8

int main() {

    int col, spaces, c, i;
    col = 0;
    spaces = 0;

    while ((c = getchar()) != EOF) {
        if (c == '\n') {
            putchar(c);
            col = 0;
        }
        else if (c == '\t') {
            spaces = TABSIZE - (col % TABSIZE);
            for (i = 0; i < spaces; ++i) {
                putchar(' ');
                ++col;
            }
        }
        else {
        putchar(c);
        ++col;
        }
    }
return 0;
}

