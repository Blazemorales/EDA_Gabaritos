#include <stdio.h>

int main(){
    int vetor[10]; //Aqui, há a declaração de um vetor de tamanho 10
    vetor[5] = 25; //Declaramos que a posição 6 do vetor recebe o valor 25
    for (int i = 0; i < 10; i++) //Faço um laço para ler os termos do meu vetor
    {
        if (i != 5) //Essa condição diz que, para todas as posições que não são a 6°, teremos o valor 0 na posição 
        {
            vetor[i] = 0;
            printf("%d ", vetor[i]);
        }
        else{
            printf("%d ", vetor[i]); //Caso onde a posição do vetor é a 6° posição
        }
    }
    printf("\n");
}