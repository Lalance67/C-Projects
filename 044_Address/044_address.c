#include <stdio.h>

int main() {
    
    int x = 10;

    printf("\nthe address to this variable is %p", (void*)&x);
    printf("\nthe value of this variable is %d", x);

    return 0;
}