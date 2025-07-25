#include <stdio.h>

void qualifications(int, float, int, int);
int main(){
    //variables
    float height;
    int age;
    int citizenship;
    int recommendee;

    //intro
    printf("\n");
    printf("Welcome to the Jedi Knight Academy Application Portal!\n");
    printf("\n");
    printf("Thank you for stepping forward to join the ranks of the Jedi. The galaxy awaits heroes like you, ready to bring balance and protect the peace. As you answer this form, remember that your courage and commitment are what make you worthy of this path.\n");
    printf("\n");
    printf("Let's start your journey. Answer the questions below to see if you're ready to become one of the few, the brave, the Jedi Knights. May the Force be with you!\n");
    printf("\n");

    //getting user input
    printf("Enter your height in centimeters(cm): ");
    scanf("%f", &height);

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Are you a citizen from planet endor? (enter '1' if yes and '0' if no): ");
    scanf(" %d", &citizenship);

    printf("Are you recommendee from Jedi master Obi-wan? (enter '1' if yes and '0' if no): ");
    scanf("%d", &recommendee);

    //process using function prototype
    qualifications(recommendee, height, age, citizenship);
    

    return 0;
}

void qualifications(int recommendee, float height, int age, int citizenship){
        if(recommendee == 1 || height >= 200 && (age >= 21 && age <= 25) && citizenship == 1){
            printf("\n");
            printf("Congratulations!! you are accepted to the Jedi Knight Academy\n");/*output*/
        }
        else{
            printf("\n");
            printf("Application denied\n"); /*output*/
        }
}