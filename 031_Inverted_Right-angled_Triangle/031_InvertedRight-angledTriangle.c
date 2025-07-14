#include <stdio.h>

int main() {
    
    int n = 0;
    printf("Input: ");
    scanf("%d", &n);

    printf("\n");

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < 5 - i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}