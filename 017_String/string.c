#include <stdio.h>
#include <string.h>

int main(){

    char string1[] = "Bro";
    char string2[] = "Code";
    
    // strlwr(string1);
    // strupr(string1);
    //  strcat(string1, string2);
    // strncat(string1, string2, 3);
    // strcpy(string1, string2);
    // strncpy(string1, string2, 3);

    // strset(string1, '?');
    // strnset(string1, 'x', 4);
    // strrev(string1);

    // int result = strlen(string1);
    int result = strcmp(string1, string2);
    // int result = strncmp(string1, string2, 1);
    // int result = strcmpi(string1, string2);
    // int result = strnicmp(string1, string2, 1);
    // ignore case  

    printf("%d", result);

    return 0;
}