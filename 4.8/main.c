#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{   /*Fa�a um programa que receba um n�mero inteiro
    e que verifique se esse n�mero � par ou se � �mpar.
    O programa deve informar ao usu�rio o n�mero
    apenas se for par e maior que 15 e se for �mpar apenas
    se for menor que 50.*/
    int num, rb=0;
    setlocale(LC_ALL,"portuguese");
    printf("Faculdade Est�cio - An�lise e desenvolvimento de sistemas\n");
    printf("Aluno(a): Tamiris A Silva\n\n");

    printf("Digite um n�mero: ");
    scanf("%d", &num);

    if((num%2==0) && (num > 15)){
        printf("\nO n�mero informado � par e maior que 15.\n");
        rb=1;
    }
    if((num%2==1) && (num < 50)){
        printf("\nO n�mero informado � impar e menor que 50.\n");
        rb=1;
    }
    if(rb==0){
        printf("\nO n�mero digitado n�o possui nenhuma das condi��es exigidas.\n");
    }
    return 0;
}
