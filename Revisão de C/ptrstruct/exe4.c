#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nome[51];
    int mat;
    float nota;
} Aluno;

int main() {
    
    Aluno turma[3] = {
        {"João Arthur", 12121211, 8.55},
        {"Beautiful Sea", 51515111, 9.99},
        {"Cleitin", 999221010, 4.99},
    };

    Aluno *p = turma;

    printf("\n");

    for (int i = 0; i < 3; i++) {
        printf("Estudante %d\n", i+1);
        printf("Nome: %s\n", (p + i)->nome);
        printf("Matrícula: %d\n", (p + i)->mat);
        printf("Nota: %.2f\n\n", (p + i)->nota);
    }

    return 0;
}