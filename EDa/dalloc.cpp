/*
    delete []
    tipoD *nome = new tipoD [n];

    "Delete vem depois de alocar a memória."

    delete [n] nome;
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    int pind, ptam;
    float *pvector;
    printf("Digite a quantidade de elementos: ");
    scanf("%d", &ptam);
    pvector = new float [ptam];
    for (pind=0; pind<ptam; pind++){
        pvector[pind] = (float)pind/ptam;
    }
    for (pind=0; pind<ptam; pind++){
        printf("%f ", pvector[pind]);
    }
    return 0;
    delete [] pvector;
}