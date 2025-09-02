#include <stdio.h>
#include <stdlib.h>

int main() {
    int var;
    int *p = &var;
    printf("Valor: ");
    scanf(" %d", &var);
    (*p)++;
    printf("Valor da variável: %d\n", *p);
    printf("Valor var: %d\n", var);
}