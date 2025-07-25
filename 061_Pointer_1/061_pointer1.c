#include <stdio.h>
#include <stdlib.h>

int main() {
    system("cls");
    
    int age = 19; //age (holds the value of age)
    int *pAge = NULL; //*pAge (holds the value of pAge which is null)
    pAge = &age; // pAge (holds the address of age, therefore *pAge holds the value of age)

    printf("age: %d\n", age); //value of age
    printf("&age: %p\n", (void*)&age); //address of age
    printf("*pAge: %d\n", *pAge); //value of pointer pAge
    printf("pAge: %p\n", (void*)pAge); //address that the pointer pAge holds
    printf("&pAge: %p\n", (void*)&pAge); //address of pointer pAge

    //add (void*) when printing address that points to a data type other than the void*

    return 0;
}