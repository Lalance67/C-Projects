#include <stdio.h>

int main(){

    char operator;
    double num1;
    double num2;
    double result;

    printf("Enter an operator + - * /: ");
    scanf("%c", &operator);

    printf("\nEnter num1:");
    scanf("%lf", &num1);
    printf("\nEnter num2:");
    scanf("%lf", &num2);

    switch (operator)
    {
    case '+':
        result = num1 + num2;
        printf("\nresult:%.2f", result);
        break;
    case '-':
        result = num1 - num2;
        printf("\nresult:%.2f", result);
        break;
        case '*':
        result = num1 * num2;
        printf("\nresult:%.2f", result);
        break;
    case '/':
        result = num1 / num2;
        printf("\nresult:%.2f", result);
        break;
    
    default:
        printf("\nEnter only a valid operator");
        break;
    }

    return 0;
}