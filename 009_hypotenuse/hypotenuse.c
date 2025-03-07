#include <stdio.h>
#include <math.h>

int main(){
    double A;
    double B;
    double C;

    printf("Enter side A:\n");
    scanf("%lf", &A);

    printf("Enter side B:\n", &B);
    scanf("%lf", &B);

    C = sqrt(A*A + B*B);

    printf("Side C: %.2lf", C);

    return 0;
}
//
/*
int main()
{
    double A;
    double B;
    double C;

    printf("Enter side A:\n");
    scanf("%lf", &A);

    printf("Enter side B:\n");
    scanf("%lf", &B);

    C = sqrt(A*A + B*B);

    printf("Side C:%lf", C);

    return 0;
}
*/
//