#include <stdio.h>

void soma(){
    int continuar = 1;
    double resultado = 0; 
    double num;
    while(continuar == 1){
        printf("Digite um valor para somar: ");
        scanf(" %lf", &num);
        resultado += num; 
        printf("Aperte 1 para continuar somando ou 0 para sair: ");
        scanf(" %d", &continuar); 
    }
    printf("O resultado da soma é: %.4lf\n", resultado);
}

void sub(){
    int continuar = 1;
    double resultado;
    double num;

    printf("Digite o primeiro valor para a subtração: ");
    scanf(" %lf", &resultado); // O primeiro valor é o ponto de partida

    while (continuar == 1){
        printf("Digite um valor para subtrair: ");
        scanf(" %lf", &num);
        resultado -= num; // Subtrai o valor do resultado
        printf("Aperte 1 para continuar subtraindo ou 0 para sair: ");
        scanf(" %d", &continuar);
    }
    printf("O resultado é: %.4lf\n", resultado);
}

void mult(){
    int continuar = 1;
    double resultado = 1; // Inicialize com 1 para evitar que o resultado seja 0
    double num;

    while (continuar == 1){
        printf("Digite um valor para multiplicar: ");
        scanf(" %lf", &num);
        resultado *= num; 
        printf("Aperte 1 para continuar multiplicando ou 0 para sair: ");
        scanf(" %d", &continuar);
    }
    printf("O resultado é: %.4lf\n", resultado);
}

void div(){
    int continuar = 1;
    double resultado;
    double num;

    printf("Digite o primeiro valor para a divisão: ");
    scanf(" %lf", &resultado);

    while (continuar == 1){
        printf("Digite um valor para dividir: ");
        scanf(" %lf", &num);

        if (num == 0) {
            printf("Erro: Coé, pô! a gente não consegue dividir por 0\n");
        } 
        else {
            resultado /= num; 
        }

        printf("Aperte 1 para continuar dividindo ou 0 para sair: ");
        scanf(" %d", &continuar);
    }
    printf("O resultado é: %.4lf\n", resultado);
}

int main(){
    int opcao = 0;
    do {
        printf("\n==\tCalcula-a-dor\t==\n");
        printf("1 - Soma\n");
        printf("2 - Subtração\n");
        printf("3 - Multiplicação\n");
        printf("4 - Divisão\n");
        printf("5 - Sair\n");
        printf("Digite a operação que você quer: ");
        scanf("%d", &opcao);

        switch(opcao){
            case 1:
                soma();
                break; // Adicionado break
            case 2:
                sub();
                break; // Adicionado break
            case 3: 
                mult();
                break; // Adicionado break
            case 4:
                div();
                break; // Adicionado break
            case 5:
                printf("Saindo da calculadora. Até mais!\n");
                break;
            default:
                printf("Entrada inválida. Por favor, escolha uma opção entre 1 e 5.\n");
                break;
        }
    } while (opcao != 5);

    return 0;
}