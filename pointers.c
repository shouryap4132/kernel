#include <stdio.h>
// studio in / out

int main() {
    int num = 20;
    // &num holds the memory address of num

    int *ptr = &num;

    // now printing 'ptr' will actually print the address, however when you want the actual variable stored at that address you have to reference to it as *ptr

    printf("%d\n", *ptr); // this will print out 20

    return 0;
}

