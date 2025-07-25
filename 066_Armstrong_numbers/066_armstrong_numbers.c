#include <stdio.h>
#include <math.h>

int main() {

    int n;
    int temp;
    int sum = 0;
    int digits = 0;

    printf("enter n: ");
    scanf("%d", &n);

    temp = n;

    int copy = n;

    while(copy > 0) {
        digits++;
        copy /= 10;
    }

    while(n > 0) {
        sum += (int)pow(n % 10, digits);
        n /= 10;
    }

    if(sum == temp) {
        printf("true");
    }
    else {
        printf("false");
    }

    return 0;
}