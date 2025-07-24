#include <stdio.h>
#include <stdlib.h>

int reverse(int);
int recurse(int);
int main() {
    
    system("cls");
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    int rev = reverse(n);

    printf("the reverse number of %d is %d", n, rev);

    return 0;
}
int reverse(int n) {
    int reverse = 0;

    while(n != 0) {
        reverse = reverse * 10 + (n % 10);
        n /= 10;
    }
    return reverse;
}