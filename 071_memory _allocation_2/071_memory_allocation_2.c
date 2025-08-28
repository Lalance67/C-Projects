#include <stdio.h>
#include <stdlib.h>

int main() {
    system("cls");

    int *arr = NULL;
    int size = 0;
    int input;

    while(1) {
        printf("Enter a number (0 to stop): ");
        scanf("%d", &input);

        if(input == 0) {
            break;
        }

        size++;

        int *temp = realloc(arr, size * sizeof(int));
        if(temp == NULL) {
            printf("memory allocation failed");
            free(arr);
            return 1;
        }
        arr = temp;
        arr[size - 1] = input;
    }
    
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    free(arr);
    return 0;
}