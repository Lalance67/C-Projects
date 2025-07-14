#include <stdio.h>

int main() {

    int num1, num2, gcd;

    printf("Input num1: ");
    scanf("%d", &num1);

    printf("Input num2: ");
    scanf("%d", &num2);

    if (num1 < num2) {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }

    while(num2 != 0) {
        gcd = num1 % num2;
        num1 = num2;
        num2 = gcd;
    }

    printf("GCD: %d", num1);


    return 0;
}