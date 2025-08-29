#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    system("cls");

    int count;
    char clear;

    printf("Enter number of students: ");
    scanf("%d", &count);
    getchar();

    printf("\n");

    int **grades = malloc(count * sizeof(int *));
    if(grades == NULL) {
        printf("memory alloction failed");
        return 1;
    }

    int *subject_count = malloc(count * sizeof(int));
    if(subject_count == NULL) {
        printf("memory alloction failed");
        return 1;
    }

    for(int i = 0; i < count; i++) {

        printf("\n--- student %d ---\n", i + 1);
        printf("how many subjects?: ");
        scanf("%d", &subject_count[i]);
        getchar();

        grades[i] = malloc(subject_count[i] * sizeof(int));
        if(grades[i] == NULL) {
            printf("memory allocation failed");
            for(int j = 0; j < count; j++) {
                free(grades[j]);
            }
            free(grades);
        }

        for(int j = 0; j < subject_count[i]; j++) {
            printf("Enter grade for subject %d: ", j + 1);
            scanf("%d", &grades[i][j]);
            while((clear = getchar()) != EOF && clear != '\n');
        }

    }

    printf("\ngrades: \n");

    for(int i = 0; i < count; i++) {
        printf("student %d: ", i + 1);
        for(int j = 0; j < subject_count[i]; j++) {
            printf("%d ", grades[i][j]);
        }
        printf("\n");
    }

    for(int j = 0; j < count; j++) {
        free(grades[j]);
    }
    free(grades);

    return 0;
}