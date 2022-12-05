#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{   /*Escreva um programa em C que calcule o volume de
    um cilindro circular, dados o seu raio e sua altura.
    Observação: V = πx r2 x h, em que π=3,14, r = raio
    e h = altura*/
    int ray, height, volume;
    setlocale(LC_ALL,"portuguese");
    printf("Faculdade Estácio - Análise e desenvolvimento de sistemas\n");
    printf("Aluno(a): Tamiris A Silva\n\n");

    printf("\tVamos calcular o volume do cilindro\n");
    printf("Digite o raio da base do cilindro: ");
    scanf("%d", &ray);
    printf("Digite a altura do cilindro: ");
    scanf("%d", &height);

    volume = (3.14*((ray*ray)*height));

    printf("O volume do cilindro é: %.2f",(float)volume);

    return 0;
}
