#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    system("cls");

    char *arr = malloc(256);

    if(arr == NULL) {
        printf("memory allocation failed");
        free(arr);
        return 1;
    }

    printf("Enter a sentence: ");
    fgets(arr, 256, stdin);

    arr[strcspn(arr, "\n")] = '\0';

    printf("You entered: %s", arr);

    free(arr);

    return 0;
}