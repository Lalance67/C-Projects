#include <stdio.h>

int main(){

    float prices[] = {1.00, 5.00, 10.00, 15.00, 20.00, 25.00, 30.00};
    
    for(int i = 0; i < sizeof(prices)/sizeof(prices[0]); i++){
        printf("$%.2f\n", prices[i]);
    }
    


    return 0;
}