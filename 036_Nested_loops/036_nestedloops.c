#include <stdio.h>

int main(){

    int rows;
    int columns;
    char symbol;
    int i;
    int j;

    printf("Enter # of rows:");
    scanf("%d", &rows);
    printf("Enter # of columns:");
    scanf("%d", &columns);

    printf("Enter a symbol to use:");
    scanf(" %c", &symbol);

    for(int i = 1; i <= rows; i++){
        for(int j = 1; j <= columns; j++){
        printf("%c", symbol);
        }
        printf("\n");
    }

    return 0;
}
//     int rows;
//     int columns;
//     char symbol;
//     int i;
//     int j;

//     printf("Enter rows:");
//     scanf("%d", &rows);
//     printf("Enter columns:");
//     scanf("%d", &columns);


//     printf("Enter a symbol:");
//     scanf(" %c", &symbol);

//     for(i = 1; i <= rows; i++){
//         for(j = 1; j <= columns; j++){
//             printf("%c", symbol);
//         }
//         printf("\n");
//     }

//     return 0;
// }