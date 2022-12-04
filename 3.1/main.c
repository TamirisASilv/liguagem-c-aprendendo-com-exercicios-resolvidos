#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{   /*Escreva um programa que leia um número na base
    decimal e em seguida imprima esse mesmo número
    nas bases octal e hexadecimal*/
    int num;
    setlocale(LC_ALL,"portuguese");
    printf("Faculdade Estácio - Análise e desenvolvimento de sistemas\n");
    printf("Aluno(a): Tamiris A Silva\n\n");

    printf("Digite um número: ");
    scanf("%d", &num);

    printf("O número %d em octal é: %o\n",num,num);
    printf("O número %d em hexadecimal é: %x\n",num,num);
    return 0;
}
