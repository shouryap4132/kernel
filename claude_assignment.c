#include <stdio.h>

// Standard input output
#include <stdlib.h>

int main(){
    size_t capacity = 1;
    size_t length = 0;

    int *arr = malloc(capacity * sizeof(int));

    if(arr == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        return 1;
    }

    printf("Enter integers (press Ctrl+D to end input): ");

    int ch;

    while(ch != EOF && ch != '\n'){
        ch = getchar();

        if(length + 1 > capacity){
            capacity++;

            int *temp = realloc(arr, capacity * sizeof(int));

            if(temp == NULL){
                fprintf(stderr, "Memory reallocation failed\n");
                free(arr);
                return 1;
            }

            arr = temp;

        }


        arr[length] = ch - '0';
        length++;

    }


    printf("You entered: ");
    for(size_t i = 0; i < length - 1; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Here is the reversed value: \n");

    for(int i = length - 2; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);
    return 0;
}