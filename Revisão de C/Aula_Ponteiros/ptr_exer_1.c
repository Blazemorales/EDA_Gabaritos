#include <stdio.h> 
#include <stdlib.h>

int main(){
    int var, *p;

    printf("Digite um valor para a sua variável:");
    scanf(" %d", &var);
    *p = var;
    printf("Valor da variável: %d\n", var);
    printf("Endereço da variável: %p\n", &var);
    printf("Valor do ponteiro: %d\n", *p);
    printf("Conteudo apontaado pelo ponteiro: %p\n", p);
}