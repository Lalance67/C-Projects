#include <stdio.h>

int main(){

    int numbers[3][3] = {
                            {1, 2, 3},
                            {4, 5, 6},
                            {7, 8, 9},
                        };

    int rows = sizeof(numbers)/sizeof(numbers[0]);
    int columns = sizeof(numbers[0])/sizeof(numbers[0][0]);

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            printf("%d ", numbers[i][j]);
        }
        printf("\n");
    }

    return 0;
}

// int main(){

//     // int numbers[2][3] = {
//     //                         {1, 2, 3,}, 
//     //                         {4, 5, 6}
//     //                     };
//     int number [3][3];
//     int rows = sizeof(number)/sizeof(number[0]);
//     int columns = sizeof(number[0])/sizeof(number[0][0]); 

//     printf("rows: %d\n", rows);
//     printf("columns: %d\n", columns);

//     number[0][0] = 1;
//     number[0][1] = 2;
//     number[0][2] = 3;
//     number[1][0] = 4;
//     number[1][1] = 5;
//     number[1][2] = 6;
//     number[2][0] = 7;
//     number[2][1] = 8;
//     number[2][2] = 9;

//     for(int i = 0; i < rows; i++){
//         for(int j = 0; j < columns; j++){
//             printf("%d ", number[i][j]);
//         }
//         printf("\n"); 
//     }
//     return 0;
// }