#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student
{
    char name[50];
    int age;
    float grade;
};


int main() {
    system("cls");
    int num;
    int ch;
    struct student s[100];

    printf("How many students?: ");
    scanf("%d", &num);

    for(int i = 0; i < num; i++) {
        printf("\n");
        while((ch = getchar()) != '\n' && ch != EOF);
        printf("Student #%d: \n", i + 1);
        
        printf("Name: ");
        fgets(s[i].name, sizeof(s[i].name), stdin);

        s[i].name[strcspn(s[i].name, "\n")] = '\0';
       
        printf("Age: ");
        scanf("%d", &s[i].age);

        while((ch = getchar()) != '\n' && ch != EOF);

        printf("grade: ");
        scanf("%f", &s[i].grade);
    }

    printf("\n\n==STUDENT RECORDS==\n\n");

    for(int i = 0; i < num; i++) {
        printf("Student #%d:\n", i + 1);
        printf("Name: %s\n", s[i].name);
        printf("Age: %d\n", s[i].age);
        printf("grade: %.2f\n\n", s[i].grade);
    }

    return 0;
}