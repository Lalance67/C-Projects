#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    system("cls");

    int count;
    
    printf("How many students: ");
    scanf("%d", &count);

    getchar();

    char **names = malloc(count * sizeof(char *));
    if(names == NULL) {
        printf("memory allocation failed");
        return 1;
    }

    printf("\n");

    for(int i = 0; i < count; i++) {

        names[i] = malloc(100 * sizeof(char));
        if(names[i] == NULL) {
            printf("memory allocation failed");
            
            for(int j = 0; j < count; j++) {
                free(names[j]);
            }
            free(names);
            return 1;
        }

        printf("Enter student #%d: ", i + 1);
        fgets(names[i], 100, stdin);

        names[i][strcspn(names[i], "\n")] = '\0';
    }

    printf("\n\nYou have entered: \n");
    for(int i = 0; i < count; i++) {
        printf("student #%d: %s\n", i + 1, names[i]);
    }

    for(int i = 0; i < count; i++) {
        free(names[i]);
    }
    free(names);

    return 0;
}