#include <stdio.h>
#include <stdlib.h>

char *unlimitedStringInput();  // Forward declaration

int main() {
    char *str = unlimitedStringInput();
    printf("You entered: %s\n", str);
    free(str);





}

char *unlimitedStringInput() {
    size_t capacity = 16;
    size_t length = 0;

    char *str = malloc(capacity * sizeof(char));
    printf("Enter a string: ");

    if(str == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        return NULL;
    }

    int ch;

    while((ch = getchar()) != '\n' && ch != EOF){
        if(length + 1 > capacity){
            capacity *= 2;
            char *temp = realloc(str, capacity * sizeof(char));

            if(temp == NULL){
                fprintf(stderr, "Memory reallocation failed\n");
                free(str);
                return NULL;
            }
            str = temp;
        }
        str[length++] = (char)ch;
    }
    
    str[length] = '\0';
    return str;
}