#include<stdio.h>

int main(){

    // Shopping cart program

    char item[50] = "";
    float price = 0.0f;
    int quantity = 0;
    char currency = '$';
    float total = 0.0f;

    printf("add item name ");
    fgets(item, sizeof(item), stdin);

    printf("add price ");
    scanf("%f", &price);

    printf("add quantity of item ");
    scanf("%d", &quantity);

    total = price * quantity;

    printf("%c%.2f", currency, total);

    return 0;


}