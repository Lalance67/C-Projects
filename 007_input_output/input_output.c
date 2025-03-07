#include <stdio.h>
#include <string.h>

int main(){
    char name[25];
    int age;

    printf("What is your name?\n");
    scanf("%s", &name);
    printf("How old are you?\n", age);
    scanf("%d", &age);

    printf("Hi %s, How are you?\n", name);
    printf("You are %d year old", age);

    return 0;
}


//
/*
int main()
{
    char name[25];
    int age;
    printf("What's your name?\n");
    //scanf("%s", name);
    fgets(name, 25, stdin);
    name[strlen(name)-1] = '\0';

    printf("How old are you?\n");
    scanf("%d", &age);
    printf("Hello %s, how are you?\n", name);
    printf("You are %d years old\n", age);
    return 0;
}
*/
//