#include <stdio.h>

int main (void){

    int min = 60;
    int hr;
    int RESULT;

    printf("Enter hr: ");
    scanf("%d", &hr),

    RESULT = min * hr;

    printf("RESULT: %d minutes", RESULT);

    return 0;
}