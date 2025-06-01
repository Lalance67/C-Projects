#include <stdio.h>
int FindMax(int x, int y){
    return (x > y) ? x : y;
}
int main(){

    int Max = FindMax(4, 3);

    printf("%d", Max);

    return 0;
}


// int findMax(int x, int y){
//     return (x > y) ? x : y;
// }
// int main(){
    
//     int max = findMax(3, 4);

//     printf("%d", max);

//     return 0;
// }