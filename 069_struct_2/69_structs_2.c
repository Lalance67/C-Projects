#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct store {
    char item[100];
    int stock;
    float price;
};

int main() {
    system("cls");

    struct store items[3];
    int size = sizeof(items) / sizeof(items[0]);

    for(int i = 0; i < size; i++) {
        printf("\nItem #%d", i + 1);
        printf("\nItem: ");
        fgets(items[i].item, sizeof(items[i].item), stdin);
        items[i].item[strcspn(items[i].item, "\n")] = '\0';
        printf("stocks: ");
        scanf("%d", &items[i].stock);
        while(getchar() != '\n');
        printf("price: ");
        scanf("%f", &items[i].price);
        while(getchar() != '\n');
        printf("\n");
    }

    printf("\t===RECORD===\n");
    printf(" %-10s %-8s %-10s", "item", "stock", "price");
    printf("\n------------------------------\n");

    for(int i = 0; i < size; i++){
        printf("|%-10s|%-8d|%-10.2f|", items[i].item, items[i].stock, items[i].price);
        printf("\n");
    }
    

    return 0;
}
