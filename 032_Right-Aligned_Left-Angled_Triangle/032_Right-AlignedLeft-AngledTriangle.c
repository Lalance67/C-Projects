#include <stdio.h>

int main() {

    int n = 0;

    printf("Input: ");
    scanf("%d", &n);

    printf("\n");

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < 4 - i; j++) {
            printf(" ");
        }
        for(int k = 0; k < i + 1; k++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}