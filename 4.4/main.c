#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{   /*Fa�a um programa que receba um n�mero inteiro e
    que verifique se esse n�mero � par ou �mpar.*/
    int num;
    setlocale(LC_ALL,"portuguese");
    printf("Faculdade Est�cio - An�lise e desenvolvimento de sistemas\n");
    printf("Aluno(a): Tamiris A Silva\n\n");

    printf("Digite um n�mero inteiro: ");
    scanf("%d", &num);

    if(num%2==0){
        printf("\nO n�mero %d � par\n", num);
    }
    else{
        printf("\nO n�mero %d � impar\n", num);
    }

    return 0;
}
