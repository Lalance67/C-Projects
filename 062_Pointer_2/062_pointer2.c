#include <stdio.h>
#include <stdlib.h>

int main() {
    system("cls");

    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr)/ sizeof(arr[0]);
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("\n%d", *(arr + num));
   
    return 0;
}


    // int arr[] = {10, 20, 30, 40, 50};
    // int size = sizeof(arr) / sizeof(arr[0]);
    // int num = 0;

    // printf("Enter a number: ");
    // scanf("%d", &num);

    // printf("%d", *(arr + num)); //gets the elements in an array