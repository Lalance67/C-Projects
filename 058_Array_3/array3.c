#include <stdio.h>
#include <stdlib.h>

void largesmall(int[], int);
int main() {
    
    system("cls");
    int arr[] = {3, 1, 2, 6, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    largesmall(arr, size);

    return 0;
}
void largesmall(int arr[], int size) {
    int largest = arr[0];
    int smallest = arr[0];

    for(int i = 1; i < size; i++) {
        if(arr[i] > largest) {
            largest = arr[i];
        }
    }
    for(int i = 1; i < size; i++) {
        if(arr[i] < smallest) {
            smallest = arr[i];
        }
    }
    printf("smallest array: %d", smallest);
    printf("\nlargest array: %d", largest);
}