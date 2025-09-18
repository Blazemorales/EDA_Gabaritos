#include <stdio.h>
#include <stdlib.h>

int main() {
    /*Defino um ponteiro para um arquivo*/
    FILE *fp;
    int ch;
    
    /*Digo que o ponteiro vai ler um arquivo*/
    fp = fopen("to-sabendo.c", "r");

    /*ch lerá o arquivo*/
    while (1) {
        ch = fgetc(fp);
        if (ch == EOF)
            break;
        printf("%c", ch);
    }
    
    /*acaba a leitura*/
    fclose(fp);

    return 0;
}