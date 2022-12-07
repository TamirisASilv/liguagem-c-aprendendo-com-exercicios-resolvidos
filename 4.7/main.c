#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{   /*Faça um programa que receba um número inteiro
    e que verifique se esse número é par ou ímpar.
    O programa deve informar:
    a)	 se o número é par, caso afirmativo informar também
    se ele é maior que 15;
    b)	 se o número é ímpar, caso afirmativo se ele é menor
    que 50*/
    int num;
    setlocale(LC_ALL,"portuguese");
    printf("Faculdade Estácio - Análise e desenvolvimento de sistemas\n");
    printf("Aluno(a): Tamiris A Silva\n\n");

    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    if(num % 2 ==0){
            printf("O número informado é par.");
            if(num > 15)
                printf("\nO número é maior que 15.\n");

    }
    if(num % 2 ==1){
        printf("O número informado é impar.");
        if(num < 50)
            printf("\nO número é menor que 50.\n");
    }

    return 0;
}
