#include <stdio.h>
#include <stdlib.h>

int main() {
    /*
    struct [tag]{
        tipo da variável nome da variável...;
        ...;
        ...;
    }
    */

    /*
    struct Livros {
        char titulo[50];
        char autor[50];
        char assunto[100];
        int id_livro; chave estrangeira
    } Dá pra colocar variáveis aqui (antes do ;)...;
    */

    typedef struct
    {
        char titulo[50];
        char autor[50];
        char assunto[100];
        int id_livro; 
    } Livros;
    
    Livros livro0 = {"Pense em Python", "Allen Downey", "Programação", 1};

    /*Livros *livro1 = (Livros*)malloc(sizeof(livro1));*/

    printf("%s\n", livro0.titulo);
    printf("\n%s\n", livro0.autor);
    printf("\n%s\n", livro0.assunto);
    printf("\n%d\n", livro0.id_livro);


}