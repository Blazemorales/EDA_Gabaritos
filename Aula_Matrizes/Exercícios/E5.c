#include <stdio.h>
#include <stdlib.h>

int main() {
    // Declares a 3D array for a building with 10 floors, 3 sectors per floor, and 15 seats per sector.
    int predio[10][3][15];

    // Initialize all seats to Free (0)
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 3; j++) {
            for(int k = 0; k < 15; k++) {
                predio[i][j][k] = 0; // Correctly initializes each element to 0
            }
        }
    }

    printf("Estado inicial do prédio (0 = Livre):\n\n");

    // Print the initialized state of the 3D array
    for (int i = 0; i < 10; i++) { // Loop for floors
        printf("Andar %d:\n", i);
        for (int j = 0; j < 3; j++) { // Loop for sectors
            printf("  Setor %d: ", j);
            for(int k = 0; k < 15; k++) { // Loop for seats
                printf("%d ", predio[i][j][k]); // Correctly prints the integer value followed by a space
            }
            printf("\n"); // Newline after each sector
        }
        printf("\n"); // Newline for better separation between floors
    }

    return 0;
}