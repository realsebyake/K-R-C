#include <stdio.h>

int setbits(int x, int p, int n, int y) {

return (x & ~(~(~0U << n) << (p + 1 - n))) | ((y &  ~(~0U << n)) << (p + 1 -n)); 

}   

int getbits(int x, int p, int n) {

return ((x & n) >> p);
    
}

int main() {

int x = 14;  // 00001110
int y = 7;   // 00000111
int p = 4;   // 00000010
int n = 3;   // 00000011


printf("%d\n", setbits(x, p, n, y));
printf("%d\n", getbits(x, p, n));
return 0;
}

/* space to visualize bits




    






*/