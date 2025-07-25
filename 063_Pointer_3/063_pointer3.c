#include <stdio.h>
#include <stdlib.h>

int main() {
    system("cls");

    int arr[] = {10, 20, 30};
    int num = 0;
    
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("%p", (void*)(arr + num)); //gets the address

    return 0;    
}