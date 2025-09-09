#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
        char titulo[101];
        char autor[101];
        int ano;
} Livros;

int main(){
    
    Livros livro1;
    strcpy(livro1.titulo,"Crônicas de Nárnia");
    strcpy(livro1.autor,"C.S. Lewis");
    livro1.ano = 1950;

    printf("Título do livro: %s\n", livro1.titulo);
    printf("Autor: %s\n", livro1.autor);
    printf("Ano de Publicação: %d\n", livro1.ano);
}