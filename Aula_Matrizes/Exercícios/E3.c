#include <stdio.h>
#include <stdlib.h>

int main() {
    int rows;
    int cols;

    printf("Digite o número de fileiras e número de poltronas, respectivamente: ");
    scanf(" %d %d", &rows, &cols);

    // Allocate memory for the matrix
    int **matriz = (int **)malloc(rows * sizeof(int *));
    if (matriz == NULL) {
        printf("Erro ao alocar memória para as linhas.\n");
        return 1;
    }

    for (int k = 0; k < rows; k++) {
        matriz[k] = (int *)malloc(cols * sizeof(int));
        if (matriz[k] == NULL) {
            printf("Erro ao alocar memória para as colunas na linha %d.\n", k);
            // Clean up already allocated memory before exiting
            for (int i = 0; i < k; i++) {
                free(matriz[i]);
            }
            free(matriz);
            return 1;
        }
    }

    // --- All operations on the matrix must happen here ---

    // 1. Initialize and print the matrix
    printf("\nStatus inicial das poltronas (0 = livre):\n");
    for (int k = 0; k < rows; k++) {
        for (int l = 0; l < cols; l++) {
            matriz[k][l] = 0; // Initialize to 0 (free)
            printf("%d ", matriz[k][l]);
        }
        printf("\n");
    }

    // 2. Process user input for seat reservations
    printf("\nSelecione as poltronas (digite 'fila coluna'). Digite -1 para sair.\n");
    
    int seat_reserved_count = 0;
    while (seat_reserved_count < rows * cols) { // Loop until all seats are taken or user quits
        int fil = -1;
        int pol = -1;
        
        printf("Qual poltrona você deseja (fila coluna): ");
        scanf("%d %d", &fil, &pol);

        if (fil == -1 || pol == -1) {
            printf("Saindo do modo de seleção.\n");
            break; // Exit the loop if user enters -1
        }

        if (fil >= 0 && fil < rows && pol >= 0 && pol < cols) {
            if (matriz[fil][pol] == 0) {
                matriz[fil][pol] = 1; // Mark seat as taken (1)
                seat_reserved_count++;
                printf("Poltrona [%d][%d] reservada com sucesso.\n", fil, pol);
            } else {
                printf("Essa poltrona já está ocupada. Tente outra.\n");
            }
        } else {
            printf("Posição inválida. As fileiras vão de 0 a %d e as poltronas de 0 a %d.\n", rows - 1, cols - 1);
        }
    }

    // 3. Print the final state of the matrix
    printf("\nStatus final das poltronas (1 = ocupada):\n");
    for (int k = 0; k < rows; k++) {
        for (int l = 0; l < cols; l++) {
            printf("%d ", matriz[k][l]);
        }
        printf("\n");
    }

    // --- Free the allocated memory after all operations are complete ---
    for (int k = 0; k < rows; k++) {
        free(matriz[k]);
    }
    free(matriz);

    return 0;
}