#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{   /*Desenvolva um programa para calcular e escrever
    a área e o perímetro de um retângulo. Dados de
    entrada: tamanho da base e da altura (tipo das
    variáveis: inteiro, valor em centímetros)*/
    int base, height, area, perimeter;
    setlocale(LC_ALL,"portuguese");
    printf("Faculdade Estácio - Análise e desenvolvimento de sistemas\n");
    printf("Aluno(a): Tamiris A Silva\n\n");

    printf("Vamos calcular a área e o perímetro de um retângulo\n\n");
    printf("Digite a base do retângulo em cm: ");
    scanf("%d", &base);
    printf("Digite a altura do retângulo em cm: ");
    scanf("%d", &height);

    area = base * height;
    perimeter = (base * 2) + (height * 2);

    printf("\nA área do retângulo é: %d\n",area);
    printf("O perímetro do retângulo é: %d\n",perimeter);


    return 0;
}
