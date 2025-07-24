#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int lessthanone(int);
int two(int);
int odd(int);
int divisble(int);
int main() {

        
    system("cls");
    int n, isprime = 1;

    printf("Enter n: ");
    scanf("%d", &n);

    if(lessthanone(n)) {
        isprime = 0;
    }
    else if (two(n)) {
        isprime = 1;
    }
    else if (odd(n)) {
        isprime = 0;
    }
    else if(divisble(n)) {
        isprime = 1;
    }
    else {
        isprime = 0;
    }

    if(isprime) {
        printf("it is a prime number");
    }
    else {
        printf("it is not a prime number");
    }

    return 0;
}
int lessthanone(int n) {
    if (n >= 1) {
        return 0;
    }
    else {
        return 1;
    }
}
int two(int n) {
    if(n == 2) {
        return 1;
    }
    else {
        return 0;
    }
}
int odd(int n) {
    if (n % 2 == 0) {
        return 1;
    }
    else {
        return 0;
    }
}
int divisble(int n) {
    for(int i = 3; i < sqrt(n); i += 2) {
        if(n % i == 0) {
            return 0;
            break;
        }
        else {
            return 1;
        }
    }
}