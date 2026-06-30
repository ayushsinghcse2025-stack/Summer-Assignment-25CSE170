#include <stdio.h>

struct Product {
    int id;
    char name[50];
    int quantity;
    float price;
};

int main() {
    struct Product p;

    printf("=== Inventory Management System ===\n");

    printf("Enter Product ID: ");
    scanf("%d", &p.id);

    printf("Enter Product Name: ");
    scanf("%s", p.name);

    printf("Enter Quantity: ");
    scanf("%d", &p.quantity);

    printf("Enter Price: ");
    scanf("%f", &p.price);

    printf("\n--- Product Details ---\n");
    printf("Product ID   : %d\n", p.id);
    printf("Product Name : %s\n", p.name);
    printf("Quantity     : %d\n", p.quantity);
    printf("Price        : %.2f\n", p.price);

    return 0;
}