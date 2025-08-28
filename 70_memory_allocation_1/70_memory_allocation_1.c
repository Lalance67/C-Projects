#include <stdio.h>
#include <stdlib.h>

int main() {
    system("cls");

    int *arr;
    int n;

    printf("How many numbers?: ");
    scanf("%d", &n);
    printf("\n");

    arr = (int *) malloc(n * sizeof(int));
    
    if(arr == NULL) {
        printf("memory allocation failed\n");
        return 1;
    }

    for(int i = 0; i < n; i++) {
        printf("Enter a number: ");
        scanf("%d", &arr[i]);
    }

    printf("\nEntered numbers: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    free(arr);

    return 0;
}