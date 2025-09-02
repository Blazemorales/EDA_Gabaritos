#include <stdio.h>
#include <stdlib.h>

void cruzado(int *ponteiro1, int *ponteiro2){
    int cruzado = *ponteiro1;
    *ponteiro1 = *ponteiro2;
    *ponteiro2 = cruzado;
    printf("Valores Modificados: %d, %d\n", *ponteiro1, *ponteiro2);
}

int main(){
    int num, nume;
    /*Valores das variáveis*/
    printf("Digite o primeiro valor:");
    scanf(" %d", &num);
    printf("\nDigite o segundo valor: ");
    scanf(" %d", &nume);
    /*Memória antes do ponteiro*/
    printf("Endereço variável 1: %p\n", &num);
    printf("Endereço variável 2: %p\n", &nume);
    /*Execução*/
    printf("Valores O.G: %d, %d\n", num, nume);
    cruzado(&num, &nume);
    return 0;
}