#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{   /*Desenvolva um programa para calcular e comparar
    a área de dois retângulos A e B. O programa deverá
    dizer qual retângulo possui a maior área ou se
    ambos possuem tamanhos iguais. Dados de entrada:
    tamanho da base e da altura (tipo das variáveis:
    inteiro, valor em centímetros)*/
    int areaA, areaB, base, height;
    setlocale(LC_ALL,"portuguese");
    printf("Faculdade Estácio - Análise e desenvolvimento de sistemas\n");
    printf("Aluno(a): Tamiris A Silva\n\n");

    printf("\tVamos comparar a area de dois retângulos\n");
    printf("Digite a base do retângulo A em cm: ");
    scanf("%d", &base);
    printf("Digite a altura do retângulo A em cm: ");
    scanf("%d", &height);
    areaA = base*height;

    printf("\nDigite a base do retângulo B: ");
    scanf("%d", &base);
    printf("Digite a altura do retângulo B: ");
    scanf("%d", &height);
    areaB = base*height;

    if(areaA > areaB){
        printf("\nA area do retângulo A é maior que a do retângulo B.\n");
        printf("Area do retângulo A = %d\n",areaA);
        printf("Area do retângulo B = %d\n", areaB);
    }
    else if(areaB > areaA){
        printf("\nA area do retângulo B é maior que a do retângulo A.\n");
        printf("Area do retângulo B = %d\n",areaB);
        printf("Area do retângulo A = %d\n", areaA);
    }
    if(areaA == areaB){
        printf("\nAs areas dos retângulos são iguais\n");
        printf("Area do retângulo A = %d\n",areaA);
        printf("Area do retângulo B = %d\n", areaB);
    }
    return 0;
}
