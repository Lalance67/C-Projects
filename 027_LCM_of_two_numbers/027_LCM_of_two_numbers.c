#include <stdio.h>

//using gcd

int main() {

    int num1, num2, gcd, product, lcm;

    printf("Input num1: ");
    scanf("%d", &num1);

    printf("Input num2: ");
    scanf("%d", &num2);

    product = num1 * num2;

    if(num1 < num2) {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }

    while(num2 != 0) {
        gcd = num1 % num2;
        num1 = num2;
        num2 = gcd;
    }

    lcm = product / num1;    //num1 == gcd

    printf("Output: %d", lcm);

    return 0;
}