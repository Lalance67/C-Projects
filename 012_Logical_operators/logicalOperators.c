#include <stdio.h>
#include <stdbool.h>

int main(){

    bool sunny = true;

    if(sunny){
        printf("\nIt's sunny outside");
    }
    else{
        printf("\nIt's cloudy outside");
    }

    return 0;
}
// ! (NOT) reverses the state of a condition 


// int main(){
//     float temp = 25;

//     if(temp <= 0 || temp >= 30){
//         printf("\nThe weather is bad!");
//     }
//     else{
//         printf("\nThe weather is good");
//     }

//     return 0;
// }
// || (OR) checks if at least one condition is true




// int main(){
//     float temp = 25;
//     bool sunny = false;

//     if( temp >= 0 && temp <= 30 && sunny){
//         printf("The weather is good");
//     }
//     else{
//         printf("The weather is bad");
//     }
//     return 0;
// }
// && (AND) checks if two conditions are true