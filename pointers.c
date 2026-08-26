#include <stdio.h>
// studio in / out

int main() {
    int x = 4;

    int *pX = &x;

    int *y = pX;

    x = 10;

    printf("Value of x: %d\n", x);
    printf("Value of y: %d\n", *y);
}

