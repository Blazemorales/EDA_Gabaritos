#include <stdio.h>
#include <stdlib.h>

int main() {
    // 0 = Free, 1 = Occupied
    int teatro[15][20];

    // Initialize all seats to Free (0)
    for (int i = 0; i < 15; i++) {
        for (int j = 0; j < 20; j++) {
            teatro[i][j] = 0;
        }
    }

    int fileira, coluna;
    char continuar;

    do {
        // Clear the screen for a cleaner display
        // Use "cls" for Windows
        system("clear");

        printf("==\tLegenda\t==\n");
        printf("Assentos Livres - L\n");
        printf("Assentos ocupados - O\n\n");

        // Print the current state of the theater
        printf("   "); // Spacing for column numbers
        for (int j = 0; j < 20; j++) {
            printf("%2d ", j);
        }
        printf("\n");

        for (int i = 0; i < 15; i++) {
            printf("%2d ", i); // Print row number
            for (int j = 0; j < 20; j++) {
                if (teatro[i][j] == 0) {
                    printf(" L ");
                } else {
                    printf(" O ");
                }
            }
            printf("\n");
        }
        printf("\n");

        // Corrected input method
        printf("Digite a fileira (0-14): ");
        if (scanf("%d", &fileira) != 1) {
            printf("Entrada inválida. Por favor, insira um número.\n");
            // Clear the input buffer to prevent an infinite loop
            while (getchar() != '\n');
            continue; // Skip to the next iteration
        }

        printf("Digite a coluna (0-19): ");
        if (scanf("%d", &coluna) != 1) {
            printf("Entrada inválida. Por favor, insira um número.\n");
            // Clear the input buffer
            while (getchar() != '\n');
            continue;
        }
        
        // Clear any leftover newline from the last numerical scanf
        while (getchar() != '\n');

        // Check if the seat is within bounds
        if (fileira >= 0 && fileira < 15 && coluna >= 0 && coluna < 20) {
            // Check if the seat is already occupied
            if (teatro[fileira][coluna] == 0) {
                teatro[fileira][coluna] = 1; // Mark the seat as occupied
                printf("Assento %d,%d reservado com sucesso!\n", fileira, coluna);
            } else {
                printf("Assento %d,%d já está ocupado. Por favor, escolha outro.\n", fileira, coluna);
            }
        } else {
            printf("Assento fora dos limites. Por favor, insira uma fileira entre 0-14 e uma coluna entre 0-19.\n");
        }

        printf("\nDeseja reservar outro assento? (s/n): ");
        // Note the space before %c to consume leading whitespace
        scanf(" %c", &continuar);
        
    } while (continuar == 's' || continuar == 'S');
    
    // The program prints the final state of the theater before finishing
    printf("\n==\tEstado Final do Teatro\t==\n");
    printf("   ");
    for (int j = 0; j < 20; j++) {
        printf("%2d ", j);
    }
    printf("\n");

    for (int i = 0; i < 15; i++) {
        printf("%2d ", i);
        for (int j = 0; j < 20; j++) {
            if (teatro[i][j] == 0) {
                printf(" L ");
            } else {
                printf(" O ");
            }
        }
        printf("\n");
    }

    printf("\nPrograma finalizado.\n");

    return 0;
}