#include <stdio.h>

int main() {

    int n;
    int count;

    printf("Input (int): ");
    scanf("%d", &n);

    while(n > 0) {
        n /= 10;
        count++;
    }

    printf("Output (number of digits): %d", count);

    return 0;
}