#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char *name;
    int subject_count;
    int *grades;
} student;

int main() {
    system("cls");
    int count;

    printf("Enter number of students: ");
    scanf("%d", &count);
    getchar();

    printf("\n");

    student *student = malloc(count * sizeof(student));
    if(student == NULL) {
        printf("memory allocation failed");
        return 1;
    }

    for(int i = 0; i < count; i++) {
        printf("--- student %d ---\n", i + 1);

        student[i].name = malloc(100 * sizeof(char));
        if(student[i].name == NULL) {
            printf("memory allocation failed");
            for(int j = 0; j < count; j++) {
                free(student[j].name);
            }
            free(student);
            
            return 1;
        }

        printf("name: ");
        fgets(student[i].name, 100, stdin);

        student[i].name[strcspn(student[i].name, "\n")] = '\0';

        printf("how many subjects?: ");
        scanf("%d", &student[i].subject_count);
        getchar();

        student[i].grades = malloc(student[i].subject_count * sizeof(int));
        if(student[i].grades == NULL) {
            printf("memory allocation failed");
            for(int j = 0; j < count; j++) {
                free(student[j].grades);
            }
            free(student);
        }

        for(int j = 0; j < student[i].subject_count; j++) {
            printf("Enter grade for subject %d: ", j + 1);
            scanf("%d", &student[i].grades[j]);
            getchar();
        }

        printf("\n");
    }

    printf("\n+--- student records ---+\n");

    for(int i = 0; i < count; i++) {
        printf("student %d: \n", i + 1);
        printf("name: %s\n", student[i].name);
        printf("grades: ");
        for(int j = 0; j < student[i].subject_count; j++) {
            printf("%d ", student[i].grades[j]);
        }
        printf("\n\n");
    }

    for(int j = 0; j < count; j++) {
        free(student[j].name);
        free(student[j].grades);
    }

    free(student);

    
    return 0;
}