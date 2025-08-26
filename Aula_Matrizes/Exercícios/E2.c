#include <stdio.h>
#include <stdlib.h>

int main() {
    int vet[10];
    int choice;
    int quantity_to_buy;
    
    // Get the initial quantity of products
    printf("--- Initializing Product Quantities ---\n");
    for (int i = 0; i < 10; i++) {
        printf("Enter the quantity for product %d: ", i);
        scanf(" %d", &vet[i]); // Correct: Use & to get the address
    }
    printf("\n");

    // Sales operation
    printf("--- Product Sales ---\n");
    printf("Enter the product number you want to buy (0-9). Enter -1 to finish: \n");
    scanf(" %d", &choice);

    while (choice != -1) {
        if (choice >= 0 && choice < 10) {
            printf("How many do you want to buy of product %d (current stock: %d)? ", choice, vet[choice]);
            scanf(" %d", &quantity_to_buy);

            if (quantity_to_buy > 0 && quantity_to_buy <= vet[choice]) {
                vet[choice] = vet[choice] - quantity_to_buy; // Decrement stock
                printf("Purchase successful! Remaining stock for product %d: %d\n", choice, vet[choice]);
            } else {
                printf("Invalid quantity or not enough stock. Please try again.\n");
            }
        } else {
            printf("Invalid product number. Please choose a number between 0 and 9.\n");
        }
        printf("\nEnter the next product number you want to buy (0-9). Enter -1 to finish: \n");
        scanf(" %d", &choice);
    }
    printf("\n");

    // Print the final state of the vector
    printf("--- Final Stock Levels ---\n");
    for (int n = 0; n < 10; n++) { // Correct: Loop from 0 to 9
        printf("Product %d: %d\n", n, vet[n]);
    }

    return 0;
}