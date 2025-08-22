#include <stdio.h>

int main(){
    int continua = 1;
    int num = 0;
    int seu_parente = 1;
    do {
        printf("Tá! calculadora de primos, se vc quiser sair, digite 0\n");
        printf("Dibas, vamo lá, digita o número que cê quer: ");
        scanf("%d", &num);
        
        if (continua == 0){
            continua = 0;
            printf("Valeu, mofi. Valeu\n");
            return 0;
        }

        if (num == 1){
            printf("1 não é primo\n");
        }

        else {
            for (int i = 2; i < num; i++){
                if (num % i == 0){
                    seu_parente == 0;
                    break;
                }
            }
        }

        if (seu_parente == 1){
            printf("Seu número é primo\n"); 
        }
        else {
            printf("Seu número não é primo!\n");
        }

    } while (continua != 0);
    return 0;
}