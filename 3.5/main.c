#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{   /*Escreva um programa que solicite ao usu�rio um
    n�mero inteiro e imprima a tabuada de multiplica��o
    desse n�mero at� 6, sendo que o comando da opera��o
    de multiplica��o deve ser usado dentro do printf*/
    int num;
    setlocale(LC_ALL,"portuguese");
    printf("Faculdade Est�cio - An�lise e desenvolvimento de sistemas\n");
    printf("Aluno(a): Tamiris A Silva\n\n");

    printf("\t>>>>>>>>>> Tabuada <<<<<<<<<<\n\n");
    printf("Digite um n�mero: ");
    scanf("%d", &num);

    printf("\n\t%d X 1 = %d\n", num, num*1);
    printf("\t%d X 2 = %d\n", num, num*2);
    printf("\t%d X 3 = %d\n", num, num*3);
    printf("\t%d X 4 = %d\n", num, num*4);
    printf("\t%d X 5 = %d\n", num, num*5);
    printf("\t%d X 6 = %d\n", num, num*6);

    return 0;
}
