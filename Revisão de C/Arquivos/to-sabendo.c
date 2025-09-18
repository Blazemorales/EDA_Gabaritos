#include <stdio.h>
#include <stdlib.h>

int main() {
    /*Defino um ponteiro para um arquivo*/
    FILE *fp;
    int ch;
    
    /*Digo que o ponteiro vai ler um arquivo*/
    fp = fopen("exe1.c", "r");
        if (fp == NULL)
            printf("Unable to open file\n");
            system("pause");
            exit(0);    
    /*acaba a leitura*/
    fclose(fp);

    return 0;
}