#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{   /*Escreva um programa que informe o valor de uma
    corrida de taxi. Para calcular o valor da corrida �
    necess�rio saber a dist�ncia percorrida em quil�metros
    e qual o tipo da bandeira da corrida, 1 ou 2. Caso a
    bandeira seja 1, o pre�o do quilometro percorrido �
    de R$ 1,80, se a bandeira for 2 o valor � de R$ 2,30.
    dist�ncia percorrida em quil�metros e qual o tipo da
    bandeira da corrida e informe o valor da corrida.*/
    int band;
    float km, preco,preco_total;
    setlocale(LC_ALL,"portuguese");
    printf("Faculdade Est�cio - An�lise e desenvolvimento de sistemas\n");
    printf("Aluno(a): Tamiris A Silva\n\n");

    printf("Digite o n�mero da bandeira <1 ou 2>: ");
    scanf("%d", &band);
    printf("Digite a kilometragem rodada: ");
    scanf("%f",&km);

    if(band == 1){
        preco = 1.8;
    }
    if(band == 2){
        preco = 2.3;
    }
    preco_total = preco * km;
    printf("O valor da corrida R$: %.2f",preco_total);

    return 0;
}
