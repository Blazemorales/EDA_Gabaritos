#include <stdio.h>
#include <stdlib.h>

int main() {
    int v1, v2;
    printf("Valor 1 e Valor 2, respectivamente: ");
    scanf(" %d %d", &v1, &v2);
    int *p1 = &v1;
    int *p2 = &v2;

    int troca = *p1;
    *p1 = *p2;
    *p2 = troca;
    printf("Valores após a troca: %d, e %d\n", v1, v2); 
}