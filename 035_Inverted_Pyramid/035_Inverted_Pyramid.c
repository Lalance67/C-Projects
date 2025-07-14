#include <stdio.h>

int main() {

    int n = 0;
    int odd = 1;
    int deduct = 0;
    
    printf("Input: ");
    scanf("%d", &n);

    printf("\n");

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < i; j++) {
            printf(" ");
        }
        for(int k = 0; k < odd + (2 * (n - 1)) - deduct; k++) {
            printf("*");
        }
        deduct += 2;
        printf("\n");
    }

    return 0;
}