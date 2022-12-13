#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{   /*Desenvolva um programa para calcular e comparar
    a �rea de dois ret�ngulos A e B. O programa dever�
    dizer qual ret�ngulo possui a maior �rea ou se
    ambos possuem tamanhos iguais. Dados de entrada:
    tamanho da base e da altura (tipo das vari�veis:
    inteiro, valor em cent�metros)*/
    int areaA, areaB, base, height;
    setlocale(LC_ALL,"portuguese");
    printf("Faculdade Est�cio - An�lise e desenvolvimento de sistemas\n");
    printf("Aluno(a): Tamiris A Silva\n\n");

    printf("\tVamos comparar a area de dois ret�ngulos\n");
    printf("Digite a base do ret�ngulo A em cm: ");
    scanf("%d", &base);
    printf("Digite a altura do ret�ngulo A em cm: ");
    scanf("%d", &height);
    areaA = base*height;

    printf("\nDigite a base do ret�ngulo B: ");
    scanf("%d", &base);
    printf("Digite a altura do ret�ngulo B: ");
    scanf("%d", &height);
    areaB = base*height;

    if(areaA > areaB){
        printf("\nA area do ret�ngulo A � maior que a do ret�ngulo B.\n");
        printf("Area do ret�ngulo A = %d\n",areaA);
        printf("Area do ret�ngulo B = %d\n", areaB);
    }
    else if(areaB > areaA){
        printf("\nA area do ret�ngulo B � maior que a do ret�ngulo A.\n");
        printf("Area do ret�ngulo B = %d\n",areaB);
        printf("Area do ret�ngulo A = %d\n", areaA);
    }
    if(areaA == areaB){
        printf("\nAs areas dos ret�ngulos s�o iguais\n");
        printf("Area do ret�ngulo A = %d\n",areaA);
        printf("Area do ret�ngulo B = %d\n", areaB);
    }
    return 0;
}
