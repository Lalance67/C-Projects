#include <stdio.h>
#include <stdlib.h>

int iseven(int);
int main() {
    system("cls");
    int num;

    printf("Enter num: ");
    scanf("%d", &num);

    int checker = iseven(num) ? 
        printf("Even number"):
        printf("Odd number");

    return 0;
}
int iseven(int x) {
    if(x % 2 == 0) {
        return 1;
    }
    else {
        return 0;
    }
}