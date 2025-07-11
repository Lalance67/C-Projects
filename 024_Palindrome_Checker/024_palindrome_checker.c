#include <stdio.h>
#include <string.h>

int main() {

    char str[100];
    char reverse[100];

    printf("Input: ");
    scanf("%s", str);

    int size = strlen(str);

    for(int i = 0; i < size; i++) {
        reverse[i] = str[size - 1 - i];
    }

    reverse[size] = '\0';

    if(strcmp(str, reverse) == 0) {
        printf("Output: true\n");
    }
    else {
        printf("Output: false\n");
    }

    return 0;
}