#include <stdio.h>

int main() {

    int n = 5;
    int odd = 1;

    printf("Input: ");
    scanf("%d", &n);

    printf("\n");

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            printf(" ");
        }
        for(int k = 0; k < odd; k++) {
            printf("*");
        }
        printf("\n");
        odd+=2;
    }

    return 0;
}