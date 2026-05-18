#include <stdio.h>

unsigned setbit(unsigned x, int p) {

return x | (1 << p);

}

unsigned clearbit(unsigned x, int p) {

return x & ~(1 << p);

}

int main() {

printf("%u\n", setbit(0b10100000, 2));
printf("%u\n", clearbit(0b10100100, 2));

return 0;
}