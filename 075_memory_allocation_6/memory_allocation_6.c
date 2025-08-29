#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    system("cls");
    int size = 50;
    char *arr = malloc(size * sizeof(char));

    if(arr == NULL) {
        printf("memory allocation failed");
        return 1;
    }
    
    printf("Enter your name: ");
    fgets(arr, size, stdin);

    arr[strcspn(arr, "\n")] = '\0';


    printf("\nYou entered: %s", arr);

    free(arr);
    return 0;
}