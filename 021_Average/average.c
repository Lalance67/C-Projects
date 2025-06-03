#include <stdio.h>

int main() {
    int num;
    int sum = 0;
    int n = 0;
    float average;

    for (int i = 0; i < 10; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &num);

        if (num % 2 == 0) {
            sum += num;
            n++;
        }
    }

    if (n > 0) {
        average = (float)sum / n;
        printf("\nThe sum of even numbers is: %d\n", sum);
        printf("The average of even integers is: %.2f\n", average);
    } else {
        printf("\nNo even numbers were entered.\n");
    }

    return 0;
}
