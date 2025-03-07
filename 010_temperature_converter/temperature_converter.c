#include <stdio.h>
#include <ctype.h>

int main(){

    char unit;
    float temp;
     
    printf("\nIs the temperature in (F) or in (C)?:");
    scanf("%c", &unit);

    unit = toupper(unit);

    if(unit == 'C'){
        printf("enter the temperature in C\n");
        scanf("%f", &temp);
        temp = (temp * 9 / 5) + 32;
        printf("\nThe temp in farenheit is: %.lf", temp);
    }
    else if(unit == 'F'){
        printf("The temp is currently in C");
        scanf("%f", &temp);
        temp = ((temp - 32) * 5) / 9;
        printf("\nThe temp in celcius is: %.lf", temp);
    }
    else{
        printf("%c is not a valid unit of measurement", unit);
    }
    return 0;
}