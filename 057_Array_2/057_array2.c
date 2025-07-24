#include <stdio.h>
#include <stdlib.h>

void printarray(int[], int);
int main() {

    system("cls");
    int arr[5] = {1, 2, 3, 5, 5};
    int size = sizeof (arr) / sizeof(arr[0]);

    printf("array elements: ");
    printarray(arr, size);

    return 0;
}
void printarray(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
}