#include <stdio.h>
// studio in / out

int main() {
    char *str = "hello world";

    printf("%p\n", (void*)str);
    printf("Address of str: %p\n", (void*)&str);
}

