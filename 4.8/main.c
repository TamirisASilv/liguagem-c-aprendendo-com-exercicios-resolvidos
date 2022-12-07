#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{   /*Faça um programa que receba um número inteiro
    e que verifique se esse número é par ou se é ímpar.
    O programa deve informar ao usuário o número
    apenas se for par e maior que 15 e se for ímpar apenas
    se for menor que 50.*/
    int num, rb=0;
    setlocale(LC_ALL,"portuguese");
    printf("Faculdade Estácio - Análise e desenvolvimento de sistemas\n");
    printf("Aluno(a): Tamiris A Silva\n\n");

    printf("Digite um número: ");
    scanf("%d", &num);

    if((num%2==0) && (num > 15)){
        printf("\nO número informado é par e maior que 15.\n");
        rb=1;
    }
    if((num%2==1) && (num < 50)){
        printf("\nO número informado é impar e menor que 50.\n");
        rb=1;
    }
    if(rb==0){
        printf("\nO número digitado não possui nenhuma das condições exigidas.\n");
    }
    return 0;
}
