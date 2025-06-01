#include <stdio.h>

void hello(char[], int);
int main(){
    
    char name[] = "Lance";
    int age = 18;

    hello(name, age);

    return 0;
}
void hello(char x[], int y){
    printf("\nHello %s", x);
    printf("\nYou are %d", y);
}

// void hello(char[], int);
// int main(){

//     char name[] = "Bro";
//     int age = 21;

//     hello(name, age);

//     return 0;
// }
// void hello(char name[], int age){
//     printf("Hello %s\n", name);
//     printf("You are %d years old", age);
// }