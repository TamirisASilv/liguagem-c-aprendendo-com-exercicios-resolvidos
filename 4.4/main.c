#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{   /*Faça um programa que receba um número inteiro e
    que verifique se esse número é par ou ímpar.*/
    int num;
    setlocale(LC_ALL,"portuguese");
    printf("Faculdade Estácio - Análise e desenvolvimento de sistemas\n");
    printf("Aluno(a): Tamiris A Silva\n\n");

    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    if(num%2==0){
        printf("\nO número %d é par\n", num);
    }
    else{
        printf("\nO número %d é impar\n", num);
    }

    return 0;
}
