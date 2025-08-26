#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define a struct to hold product information
typedef struct {
    char name[50];
    int quantity;
} Product;

// Function to register new products
int register_products(Product products[]) {
    int count = 0;
    char input[50];

    printf("Enter product names (type 'done' to finish):\n");
    while (1) {
        printf("Product %d: ", count + 1);
        scanf("%49s", input);

        if (strcmp(input, "done") == 0) {
            break;
        }

        // Copy the input to the product struct
        strcpy(products[count].name, input);
        count++;

        // Stop if maximum products are reached (to prevent buffer overflow)
        if (count >= 100) {
            printf("Maximum number of products reached.\n");
            break;
        }
    }
    return count;
}

// Function to set the quantity for each product
void set_stock(Product products[], int total_products) {
    printf("\n--- Setting Stock Quantities ---\n");
    for (int i = 0; i < total_products; i++) {
        printf("Enter quantity for %s: ", products[i].name);
        scanf("%d", &products[i].quantity);
    }
}

// Function to display the entire inventory
void display_inventory(Product products[], int total_products) {
    printf("\n--- Current Inventory ---\n");
    if (total_products == 0) {
        printf("No products registered.\n");
        return;
    }
    for (int i = 0; i < total_products; i++) {
        printf("Product: %s, Quantity: %d\n", products[i].name, products[i].quantity);
    }
}

int main() {
    // We'll use a fixed-size array for simplicity, up to 100 products
    Product inventory[100];
    int num_products = 0;

    num_products = register_products(inventory);
    
    if (num_products > 0) {
        set_stock(inventory, num_products);
        display_inventory(inventory, num_products);
    } else {
        printf("No products were registered. Exiting.\n");
    }

    return 0;
}