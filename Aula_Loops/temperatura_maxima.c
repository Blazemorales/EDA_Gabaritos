#include <stdio.h>

void Em_Celsius(){
    float tc = 0;
    float tf = 0;
    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%f", &tf);    
    tc = ((tf - 32)*5)/9;
    printf("A temperatura em Celsius é de %.2f°C\n", tc);
}

void Em_Fahrenheit(){
    float tc = 0;
    float tf = 0;
    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &tc);    
    tf = ((tc*9)/5) + 32;
    printf("A temperatura em Fahrenheit é de %.2f°F\n", tf);
}


int main(){
    char op;
    printf("===\tCONVERSOR DE TEMPERATURA\t===\n");
    printf("C - Para converter de °F para °C\n");
    printf("F - Para converter de °C para °F\n");
    printf("S - Sair\n");
    printf("Escolha sua opção: ");
    scanf(" %c", &op);
    switch (op)
    {
        case 'C':
            Em_Celsius();
            break;
        case 'F':
            Em_Fahrenheit();
            break;
        case 'S':
            printf("FLW!!!!!!\n");
            break;
        default:
            break;
    }
}