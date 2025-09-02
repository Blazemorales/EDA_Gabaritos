#include <stdio.h>
#include <stdlib.h>

/*
Exemplos:

    1)
        int main() {
            return 0;
        } //Quando estamos ecrevendo isso, estamos reservando um espaço vazio na memória

        int main() {
            int num; //Aqui, você reserva um espaço de 4 bytes na memória. Só que eu não sei qual o local em que a variável foi alocada, ou seja, é randômico, aleatório  
            return 0;
        }

    2)
        int main() {
            int num; 
            num = 111444; 
            printf("Valor: %d\n", num);
            printf("Endereço: %p\n", &num);
            return 0;
        }
    
    3)
        int main() {
            int num, *ptr //O ponteiro só armazena o endereço de memória. Não sei onde o ponteiro está apontando, mas ele aponta, obrigatoriamente, para um inteiro, nesse caso; 
            num = 111444;
            ptr = NULL; //ela anota o valor null no ptr
            printf("Valor: %d\n", num);
            printf("Endereço: %p\n", &num);
            return 0;
        }

    4)
        int main() {
            int num, *ptr 
            num = 111444;
            ptr = &num; 
            printf("Valor: %d\n", num);
            printf("Endereço: %p\n", &num);
            return 0;
        }

    5)
        int main() {
            int num, *ptr;
            num = 111444;
            ptr = &num;
            *ptr = 90560;
            printf("Valor: %d\n", num);
            printf("Endereço: %p\n", &num);
            return 0;
        }
*/

// Função para trocar o valor de duas variáveis float:
void trocarValores(float *ptr1, float *ptr2) {
    float temp = *ptr1; //Armazena o valor de ptr1 em uma variáv5 *ptr1 = *ptr2; //Atribui o valor de ptr2 a ptr1
    *ptr1 = *ptr2;
    *ptr2 = temp; //Atribui o valor temporário a ptr2
}

int main() {
    float a = 3.14;
    float b = 2.71;
    printf("Valores originais: a = %.2f, b = %.2f\n", a, b);
    //Chama a função para trocar os valores de 'a' e 'b':
    trocarValores(&a, &b);
    printf("Valores trocados: a = %.2f, b = %.2f\n", a, b);
    return 0;
}