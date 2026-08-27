#include <stdio.h>

// Standard input output
#include <stdlib.h>

//Standard library

// Forward declaration (function prototype)
int stringlength(char *s);

int main() {

    size_t capacity =1;
    size_t length = 0;

    char *str = malloc(capacity * sizeof(char));
    printf("Enter a string: ");

    if(str == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        return 1;
    }

    int ch;

    while(ch != '\n' && ch != EOF){
        ch = getchar();


        // Is there enough space in the buffer?

        if( length + 1 > capacity){
            capacity++;
            char *temp = realloc(str, capacity * sizeof(char));

            if(temp == NULL){
                fprintf(stderr, "Memory reallocation failed\n");
                free(str);
                return 1;
            }
            str = temp;
        }
        str[length++] = (char)ch;

    }
    str[length] = '\0'; // Null-terminate the string

    printf("You entered: %s\n", str);

    printf("Length of the string: %zu\n", length);

    printf("Length calculated by stringlength function: %d\n", stringlength(str));

    printf("Capacity of the buffer: %zu\n", capacity);

    free(str);
}

int stringlength(char *s){
    int len = 0;
    while(s[len] != '\0'){
        len++;
    }
    return len;
}
