#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    system("cls");
    int arr[100];
    int size;

    printf("Enter size of the array: ");
    scanf("%d", &size);

    for(int i = 0; i < size; i++) {
        printf("Enter the array elements: ");
        scanf("%d", &arr[i]);
    }

    printf("\nArray elements: ");
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}