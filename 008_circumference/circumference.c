#include <stdio.h>

int main(){
    const double PI = 3.14159;
    double radius;
    double circumference;
    double area;

    printf("What is the radius?\n");
    scanf("%lf", &radius);

    circumference = 2 * radius * PI;
    area = PI * radius * radius;

    printf("Circumference: %.3lf\n", circumference);
    printf("The area of a circle: %.3lf\n", area);

    return 0;
}
//
/*
int main()
{
    const double PI = 3.14159;
    double radius;
    double circumference;
    double area;

    printf("Enter radius of a circle\n");
    scanf("%lf", &radius);

    circumference = 2 * PI * radius;
    area = PI * radius * radius;
    printf("circumference: %lf\n", circumference);
    printf("area: %lf", area);
    return 0;
}
*/
//