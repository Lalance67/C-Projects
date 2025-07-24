#include <stdio.h>

int recurse(int);
int main() {

    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("The sum of the digit %d is %d", n, recurse(n));

    return 0;
}
int recurse(int n) {
    if(n == 0) {
        return 0;
    }
    else {
        return (n % 10) + recurse(n / 10);
    }
}