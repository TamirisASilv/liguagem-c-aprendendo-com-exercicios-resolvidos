#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{   /*Escreva um programa que leia um n�mero na base
    decimal e em seguida imprima esse mesmo n�mero
    nas bases octal e hexadecimal*/
    int num;
    setlocale(LC_ALL,"portuguese");
    printf("Faculdade Est�cio - An�lise e desenvolvimento de sistemas\n");
    printf("Aluno(a): Tamiris A Silva\n\n");

    printf("Digite um n�mero: ");
    scanf("%d", &num);

    printf("O n�mero %d em octal �: %o\n",num,num);
    printf("O n�mero %d em hexadecimal �: %x\n",num,num);
    return 0;
}
