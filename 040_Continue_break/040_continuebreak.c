#include <stdio.h>

int main(){

    for(int i = 1; i <= 20; i++){
        if(i == 13){
            break;
        }
        if(i == 3) { //skips 3
            continue;
        }
        printf("\n%d", i);
    }

    return 0;
}