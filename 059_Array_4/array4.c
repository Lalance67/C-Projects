#include <stdio.h>
#include <stdlib.h>

int main() {

    system("cls");
    char arr[] = "lance";
    int size = sizeof(arr) / sizeof(arr[0]) - 1;
    char rev[size + 1];

    for(int i = 0; i < size; i++) {
        rev[i] = arr[size - 1 - i];
    }
    rev[size] = '\0';

    printf("reversed: %s", rev);

    return 0;
}