#include <stdio.h>
#include <stdlib.h>

int factorial(int);
int main() {
    system("cls");
    int num;
  
    printf("Enter num: ");
    scanf("%d", &num);

    printf("the factorial of the %d is %d", num, factorial(num));

    return 0;
}
int factorial(int x) {
    if (x == 0) {
        return 1;
    }
    else {
        return x * factorial(x-1);
    }
}