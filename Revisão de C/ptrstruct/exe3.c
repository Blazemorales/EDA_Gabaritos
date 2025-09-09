#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char nome[51];
    int mat;
    float nota;
} Aluno;

int main(){
    
    Aluno *aluno; 
    /*Aluno = a*/;
    
    /*aluno = &a;*/ 
    
    aluno = (Aluno*)malloc(sizeof(Aluno));
    strcpy(aluno->nome, "Matheus");
    aluno->mat = 123456;
    aluno->nota = 10;

    /* a = {Mat, 121212, 6}; */

    printf("Nome: %s\n", aluno->nome);
    printf("Matrícula: %d\n", aluno->mat);
    printf("Nota: %s.2f\n", aluno->nota); 
}