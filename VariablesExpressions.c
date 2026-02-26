#include <stdio.h>

// Integer based calculation (More general)
void integerTable() {

    int fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    
    printf("%3s %6s\n", "fahr", "celsius");

    while (fahr <= upper) {
        celsius = 5 * (fahr-32) / 9;
        printf("%3d %6d\n", fahr, celsius);
        fahr = fahr + step;
    }

    printf("\n");
}   


// Floating point based calculation (More accurate)
void floatTable() {
    
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;

    printf("%3s %6s\n", "fahr", "celsius");

    while (fahr <= upper) {
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}

int main() {
    integerTable();
    floatTable();
    return 0;
}