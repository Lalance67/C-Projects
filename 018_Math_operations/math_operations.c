#include <stdio.h>
#include <math.h>

int main(void){

    double a;
    double b;
    double c;
    double addition;
    double subtraction;
    double multiplication;
    double division;
    double squares;

    printf("\nEnter a: ");
    scanf("%lf", &a);
    printf("\nEnter b: ");
    scanf("%lf", &b);
    printf("\nEnter c: ");
    scanf("%lf", &c);

    addition = a + b + c;
    subtraction = a - b - c;
    multiplication = a * b * c;
    division = a / b / c;
    squares = pow(a, 2) + pow(b, 2) + pow(c, 2);

    printf("a + b + c = %.2lf\n", addition);
    printf("a - b - c = %.2lf\n", subtraction);
    printf("a * b * c = %.2lf\n", multiplication);
    printf("a / b / c = %.2lf\n", division);
    printf("pow(a, 2) + pow(b, 2) + pow(c, 2) = %.2lf\n", squares);

    return 0;
}