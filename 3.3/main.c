#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{   /*Desenvolva um programa para calcular e escrever
    a �rea e o per�metro de um ret�ngulo. Dados de
    entrada: tamanho da base e da altura (tipo das
    vari�veis: inteiro, valor em cent�metros)*/
    int base, height, area, perimeter;
    setlocale(LC_ALL,"portuguese");
    printf("Faculdade Est�cio - An�lise e desenvolvimento de sistemas\n");
    printf("Aluno(a): Tamiris A Silva\n\n");

    printf("Vamos calcular a �rea e o per�metro de um ret�ngulo\n\n");
    printf("Digite a base do ret�ngulo em cm: ");
    scanf("%d", &base);
    printf("Digite a altura do ret�ngulo em cm: ");
    scanf("%d", &height);

    area = base * height;
    perimeter = (base * 2) + (height * 2);

    printf("\nA �rea do ret�ngulo �: %d\n",area);
    printf("O per�metro do ret�ngulo �: %d\n",perimeter);


    return 0;
}
