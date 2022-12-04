#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{   /* Desenvolva um programa para calcular e escrever
    a área e o perímetro de um quadrado. Dados de
    entrada: tamanho do lado (tipo da variável: numérico
    inteiro, valor em centímetros). Essa conversão deve
    ser feita por meio da função printf().*/
    int side, area, perimeter;
    setlocale(LC_ALL,"portuguese");
    printf("Faculdade Estácio - Análise e desenvolvimento de sistemas\n");
    printf("Aluno(a): Tamiris A Silva\n\n");

    printf("Digite o lado do quadrado em cm: ");
    scanf("%d", &side);

    area = side * side;
    perimeter = side * 4;

    printf("A area do quadrado é: %d\n", area);
    printf("O perimetro do quadrado é: %d\n", perimeter);
    return 0;
}
