#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{   /*Escreva um programa que solicite ao usuário um
    número inteiro e imprima a tabuada de multiplicação
    desse número até 6, sendo que o comando da operação
    de multiplicação deve ser usado dentro do printf*/
    int num;
    setlocale(LC_ALL,"portuguese");
    printf("Faculdade Estácio - Análise e desenvolvimento de sistemas\n");
    printf("Aluno(a): Tamiris A Silva\n\n");

    printf("\t>>>>>>>>>> Tabuada <<<<<<<<<<\n\n");
    printf("Digite um número: ");
    scanf("%d", &num);

    printf("\n\t%d X 1 = %d\n", num, num*1);
    printf("\t%d X 2 = %d\n", num, num*2);
    printf("\t%d X 3 = %d\n", num, num*3);
    printf("\t%d X 4 = %d\n", num, num*4);
    printf("\t%d X 5 = %d\n", num, num*5);
    printf("\t%d X 6 = %d\n", num, num*6);

    return 0;
}
