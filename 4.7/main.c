#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{   /*Fa�a um programa que receba um n�mero inteiro
    e que verifique se esse n�mero � par ou �mpar.
    O programa deve informar:
    a)	 se o n�mero � par, caso afirmativo informar tamb�m
    se ele � maior que 15;
    b)	 se o n�mero � �mpar, caso afirmativo se ele � menor
    que 50*/
    int num;
    setlocale(LC_ALL,"portuguese");
    printf("Faculdade Est�cio - An�lise e desenvolvimento de sistemas\n");
    printf("Aluno(a): Tamiris A Silva\n\n");

    printf("Digite um n�mero inteiro: ");
    scanf("%d", &num);

    if(num % 2 ==0){
            printf("O n�mero informado � par.");
            if(num > 15)
                printf("\nO n�mero � maior que 15.\n");

    }
    if(num % 2 ==1){
        printf("O n�mero informado � impar.");
        if(num < 50)
            printf("\nO n�mero � menor que 50.\n");
    }

    return 0;
}
