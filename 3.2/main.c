#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{   /* Desenvolva um programa para calcular e escrever
    a �rea e o per�metro de um quadrado. Dados de
    entrada: tamanho do lado (tipo da vari�vel: num�rico
    inteiro, valor em cent�metros). Essa convers�o deve
    ser feita por meio da fun��o printf().*/
    int side, area, perimeter;
    setlocale(LC_ALL,"portuguese");
    printf("Faculdade Est�cio - An�lise e desenvolvimento de sistemas\n");
    printf("Aluno(a): Tamiris A Silva\n\n");

    printf("Digite o lado do quadrado em cm: ");
    scanf("%d", &side);

    area = side * side;
    perimeter = side * 4;

    printf("A area do quadrado �: %d\n", area);
    printf("O perimetro do quadrado �: %d\n", perimeter);
    return 0;
}
