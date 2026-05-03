#include <stdio.h>

int setbits(int x, int p, int n, int y) {

return (x & ~(~(~0U << n) << (p + 1 - n))) | ((y &  ~(~0U << n)) << (p + 1 -n));

}

int main() {

int x = 14;  // 00001110
int y = 192; // 11000000
int p = 4;
int n = 3;


printf("%d\n", setbits(x, p, n, y));
return 0;
}
