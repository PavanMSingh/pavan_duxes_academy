#include <stdio.h>

struct Product {
    int id;
    char name[30];
    float price;
    int quantity;
};

int main() {
    struct Product product;
    float total;

    printf("Enter product ID: ");
    scanf("%d", &product.id);

    printf("Enter product name: ");
    scanf("%s", product.name);

    printf("Enter price: ");
    scanf("%f", &product.price);

    printf("Enter quantity: ");
    scanf("%d", &product.quantity);

    total = product.price * product.quantity;

    printf("\nProduct Details\n");
    printf("ID: %d\n", product.id);
    printf("Name: %s\n", product.name);
    printf("Price: %.2f\n", product.price);
    printf("Quantity: %d\n", product.quantity);
    printf("Total price: %.2f\n", total);

    return 0;
}