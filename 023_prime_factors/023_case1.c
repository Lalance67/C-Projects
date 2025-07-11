#include <stdio.h>

int main(){

    int num;
    int factor;

    do{printf("Enter a Non-negative number: ");
    scanf("%d", &num);}while(num < 0);

    printf("The prime factors of %d are/is: ", num);

    if(num == 0){
        printf("None");
    }
    else if(num == 1){
        printf("1");
    }
    else {
        for(int factor = 2; num > 1; factor++){
             while(num % factor == 0){
            printf("%d ", factor);
            num /= factor;
            }
        }
    }
return 0;
}
