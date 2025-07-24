#include <stdio.h>
#include <stdlib.h>

int main() { //taking array input from the user

    system("cls");
    int arr[5];
    
    for(int i = 0; i < 5; i++) {
        printf("Enter 5 numbers: ");
        scanf("%d", &arr[i]);
    }

    printf("You entered: ");
    for(int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}