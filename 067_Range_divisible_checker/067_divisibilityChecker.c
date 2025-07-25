#include <stdio.h>

int main(){

    int N1;
    int N2;
    int M;
    int divisible_counter = 0;

    printf("\nThis program allows the user to input a range of numbers (N1 to N2) and a divisor (M). It then checks each number in the range to see if it's divisible by M, displays the numbers that are divisible, and counts how many there are.\n");

    printf("\nEnter N1: ");
    scanf("%d", &N1);

    printf("Enter N2: ");
    scanf("%d", &N2);

    printf("Enter M: ");
    scanf("%d", &M);

    printf("\nThe numbers ranging from %d to %d that are divisible by %d are:\n", N1, N2, M);

    for(int i = N1; i <= N2; i++){
        if(i % M == 0){
            printf("%d ", i);
            divisible_counter++;
        }
    }

    printf("\n\ntotal numbers that are divisible by M are: %d", divisible_counter);

    return 0;
}