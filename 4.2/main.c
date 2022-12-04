#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{   /*Desenvolva um programa para calcular e para
    comparar a área de dois retângulos A e B. O programa
    deverá informar qual retângulo possui a maior área
    ou se possuem tamanhos iguais. Dados de entrada:
    tamanho da base e da altura (tipo das variáveis:
    inteiro, valor em centímetros)*/
    int base1, base2, height1, height2, area1, area2;
    setlocale(LC_ALL,"portuguese");
    printf("Faculdade Estácio - Análise e desenvolvimento de sistemas\n");
    printf("Aluno(a): Tamiris A Silva\n\n");

    printf("\tVamos comparar a área de dois retângulos\n\n");
    printf("Digite a base do primeiro retângulo em cm: ");
    scanf("%d", &base1);
    printf("Digite a altura do primeiro retângulo em cm: ");
    scanf("%d", &height1);

    printf("\nDigite a base do segundo retângulo: ");
    scanf("%d", &base2);
    printf("Digite a altura do segundo retângulo: ");
    scanf("%d", &height2);

    area1 = base1 * height1;
    area2 = base2 * height2;

    printf("_________________________________________________________");
    printf("\nA área do primeiro retângulo: %.2f cm\n",(float)area1);
    printf("A área do segundo retângulo: %.2f cm\n",(float)area2);

    if(area1 > area2){
        printf("\nA área do primeiro retângulo é maior\n");
    }
    if(area2 > area1){
        printf("\nA área do segundo retângulo é maior\n");
    }
    if(area1 == area2){
        printf("\nAs áreas dos retângulos são iguais\n");
    }
    return 0;
}
