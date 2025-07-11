#include <stdio.h>

int main() {

    int n;
    int original;
    int reversed = 0;
    int digit;
    
    printf("Input: ");
    scanf("%d", &n);

    original = n;

    while(n > 0) {
        digit = n % 10;
        reversed = reversed * 10 + digit;
        n /= 10;
    }

    if(original == reversed) {
        printf("true");
    }
    else {
        printf("false");
    }

    return 0;
}