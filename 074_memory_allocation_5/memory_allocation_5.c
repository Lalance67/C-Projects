#include <stdio.h>
#include <stdlib.h>

int main() {
    system("cls");

    int *arr = malloc(3 * sizeof(int));
    int n1 = 3;
    int n2 = 3;
    int n;
    int input;

    for(int i = 0; i < 3; i++) {
        printf("Enter a number: ");
        scanf("%d", &arr[i]);
    }

    printf("\nHow many numbers to input: ");
    scanf("%d", &n);

    printf("\n");

    while(1) {
        printf("Enter a number: ");
        scanf("%d", &input);

        int *temp = realloc(arr, (n1 + n) * sizeof(int));
        if(temp == NULL) {
            printf("memory allocation failed");
            free(arr);
            return 1;
        }

        arr = temp;
        arr[n1] = input;
        n1++;
        if(n1 == (n2 + n)) {
            break;
        }
    }

    printf("\nNumbers Entered: ");

    for(int i = 0; i < n2 + n; i++) {
        printf("%d ", arr[i]);
    }

    free(arr);


    return 0;
}