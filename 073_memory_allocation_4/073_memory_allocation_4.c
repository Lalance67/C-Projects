#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    system("cls");

    char *str = NULL;
    char ch;
    int len = 0;

    printf("Enter a sentence: ");

    while((ch = getchar()) != '\n') {
        char *temp = realloc(str, len + 2);
        if(temp == NULL) {
            printf("memory allocation failed");
            free(str);
            return 1;
        }
        str = temp;
        str[len++] = ch;
    }

    str[len] = '\0';
    printf("You entered: %s", str);
    free(str);

    return 0;
}