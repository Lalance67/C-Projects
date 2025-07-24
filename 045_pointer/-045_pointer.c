#include <stdio.h>

int main() {

    int x = 10;
    int *ptr = &x;

    printf("\nthe value of x is %d", x);
    printf("\nthe address of x is %p", (void*)&x);
    printf("\nthe address of *ptr is %p", ptr);
    printf("\nthe value of *ptr is %d", *ptr);

    return 0;
}