#include <stdio.h>
#include <stdlib.h>

int max(int, int);
int main() {

    system("cls");
    int num1, num2;

    printf("Enter num1: ");
    scanf("%d", &num1);

    printf("Enter num2: ");
    scanf("%d", &num2);

    int maximum = max(num1, num2);

    printf("\nMaximum: %d", maximum);

    return 0;
}
int max(int x, int y) {
    return (x < y) ? y: x;
}