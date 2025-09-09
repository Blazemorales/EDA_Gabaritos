#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char titulo[101];
    char autor[101];
    int ano;
} Livros; 

int main(){

    Livros *ptrlivro;
    ptrlivro = (Livros*)malloc(sizeof(Livros));
    strcpy(ptrlivro->titulo, "Confissões vol. 1");
    strcpy(ptrlivro->autor, "Santo Agostinho");
    ptrlivro->ano = 397;

    printf("%s\n", ptrlivro->titulo);
    printf("%s\n", ptrlivro->autor);
    printf("%d\n", ptrlivro->ano);
}