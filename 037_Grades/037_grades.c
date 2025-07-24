#include <stdio.h>

int main() {

    int grade;

    printf("input: ");
    scanf("%d", &grade);

    if(grade >= 90 && grade <= 100) {
     printf("Output: A");
    }
    else if(grade >= 80 && grade <= 89) {
        printf("Output: B");
    }
    else if(grade >= 70 && grade <= 79) {
        printf("Output: C");
    }
    else if(grade >= 60 && grade <= 69) {
        printf("Output: D");
    }
    else if (grade < 60){
        printf("Output: F");
    }
    else {
      printf("invalid input");
    }

    return 0;
}