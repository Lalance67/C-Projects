#include <stdio.h>

int recurse(int);
int main() {

    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("the sum of %d is %d", n, recurse(n));

    return 0;
}
int recurse(int n) {
    if(n == 0) {
        return 0;
    }
    else {
        return n + recurse(n - 1);
    }
}