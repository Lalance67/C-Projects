#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    system("cls");

    char name[] = "lance";
    char *pName = NULL;
    pName = &name;

    printf("the length of the array: %d", strlen(pName));

    return 0;
}