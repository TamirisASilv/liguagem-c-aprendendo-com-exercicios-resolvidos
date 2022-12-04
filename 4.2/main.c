#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{   /*Desenvolva um programa para calcular e para
    comparar a �rea de dois ret�ngulos A e B. O programa
    dever� informar qual ret�ngulo possui a maior �rea
    ou se possuem tamanhos iguais. Dados de entrada:
    tamanho da base e da altura (tipo das vari�veis:
    inteiro, valor em cent�metros)*/
    int base1, base2, height1, height2, area1, area2;
    setlocale(LC_ALL,"portuguese");
    printf("Faculdade Est�cio - An�lise e desenvolvimento de sistemas\n");
    printf("Aluno(a): Tamiris A Silva\n\n");

    printf("\tVamos comparar a �rea de dois ret�ngulos\n\n");
    printf("Digite a base do primeiro ret�ngulo em cm: ");
    scanf("%d", &base1);
    printf("Digite a altura do primeiro ret�ngulo em cm: ");
    scanf("%d", &height1);

    printf("\nDigite a base do segundo ret�ngulo: ");
    scanf("%d", &base2);
    printf("Digite a altura do segundo ret�ngulo: ");
    scanf("%d", &height2);

    area1 = base1 * height1;
    area2 = base2 * height2;

    printf("_________________________________________________________");
    printf("\nA �rea do primeiro ret�ngulo: %.2f cm\n",(float)area1);
    printf("A �rea do segundo ret�ngulo: %.2f cm\n",(float)area2);

    if(area1 > area2){
        printf("\nA �rea do primeiro ret�ngulo � maior\n");
    }
    if(area2 > area1){
        printf("\nA �rea do segundo ret�ngulo � maior\n");
    }
    if(area1 == area2){
        printf("\nAs �reas dos ret�ngulos s�o iguais\n");
    }
    return 0;
}
