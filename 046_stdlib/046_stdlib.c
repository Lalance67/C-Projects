#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main() {

    system("cls"); //"clrscr;" for conio.h
    printf("screen cleared!\n");

    char ch;

    printf("\npress any key to continue...");
    ch = getche();

    printf("\n\033[1;31m%c\033[0m\n", ch);

    return 0;
}




// int main() { getch for strings

//     system("cls"); 
//     printf("screen cleared!\n");

//     char str[20];
//     int i = 0;
//     char ch;

//     printf("enter a string: ");
    
//     while(i < 19) {
//         ch = getch();

//         if(ch == '\r') {
//             break;
//         }

//         str[i] = ch;
//         printf("*");
//         i++;
//     }

//     str[i] = '\0';

//     printf("\nyou entered: %s\n", str);
//     return 0;
// }



// int main() { for single number

//     int num;
//     char ch;

//     printf("\nEnter a number");
//     ch = getch();

//     num = ch - '0';
//     printf("\nYou entered: %d", num);

//     return 0;
// }


// int main() {

//     int num = 0;
//     char ch;

//     printf("Enter a number: ");

//     while(1) {
//         ch = getch();

//         if(ch == '\r') break;

//         if(ch >= '0' && ch <= '9') {
//             num = num * 10 + (ch - '0');
//             printf("*");
//         }
//     }

//     printf("\nYou entered: %d", num);

//     return 0;
// }



int main() {
    
}