#include <stdio.h>

void birthday(char x[], int y){
    printf("Happy birthday %s\n", x);
    printf("You are %d", y);
}

int main(){

    char name[] = "Lance";
    int age = 18;

    birthday(name, age);

    return 0;
}


// void birthday(char x[], int y){
//     printf("\n Happy birthday dear %s!", x);
//     printf("\nYou are %d years old!", y);
//  }

// int main(){

//     char name[] = "Bro";
//     int age = 21;

//     birthday(name, age);

//     return 0;
// }
// arguments are what you send as function
// parameters are what a function expects when its invoke

// these are used to talk to one another between different funtion





// void birthday();
// int main(){
//     printf("\nHappy birthday to you!");
//     printf("\nHappu birthday to you!\n");
//     printf("Happy birthday dear...YOU!\n");
// }

// void birthday(){
//     birthday();
// }