#include <stdio.h>
// Cadastro de um Aluno//

int main(){
    int idade, matricula;
    float altura;
    char nome[50];

    printf("Digite sua idade: \n");     //leitura idade
    scanf("%d", &idade);

    printf("Digite sua altura: \n");    
    scanf("%f", &altura);

    printf("Digite o seu nome: \n");    
    scanf("%s", &nome);

    printf("Digite sua matricula: \n");
    scanf("%d", &matricula);

    printf("Nome do aluno: %s\n", nome);
    printf("Matrícula: %d\n", matricula);
    printf("Idade: %d anos\n", idade);  
    printf("Altura: %.2f metros\n", altura);    //%.2f formatação da altura, 2 digt.após a vígula

    return 0;   //confirmação

}