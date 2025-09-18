#include <stdio.h>
#include <stdlib.h>

int main(){
    int *Vet1, *Vet2;
    Vet1 = (int *) malloc (100*sizeof(int));
    Vet2 = (int *) calloc (100,sizeof(int)); /*Calloc já tem um espaço pré-definido. Você não precisa ficar restringindo o espaço. O Bom é que ele tbm já libera a memória (não fica com lixo de memória)*/
    free (Vet1);
    free (Vet2);
    return 0;
}