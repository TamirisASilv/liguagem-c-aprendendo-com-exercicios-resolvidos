#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{   /*Escreva um programa para informar o valor de
    uma corrida de taxi que considere o valor mínimo
    da corrida. Ou seja, ao entrar no taxi, o cliente
    deve pagar um valor mínimo de R$ 3,50, mesmo
    que o tamanho da corrida seja inferior a esse valor.
    O programa deve considerar as informações do
    exercício anterior*/
    int band;
    float km, preco, preco_total, min=3.50;
    setlocale(LC_ALL,"portuguese");
    printf("Faculdade Estácio - Análise e desenvolvimento de sistemas\n");
    printf("Aluno(a): Tamiris A Silva\n\n");

    printf("\t<<<<<<<<<<TAXIMETRO>>>>>>>>>>\n\n");
    printf("ATENÇÃO: Taxa mínima do táxi R$: 3.50\n");
    printf("Digite o número da bandeira <1 ou 2>: ");
    scanf("%d", &band);
    printf("Digite a kilometragem rodada: ");
    scanf("%f", &km);

    if(band == 1){
        preco = 1.80;
    }
    if(band == 2){
        preco = 2.30;
    }

    preco_total = preco * km;
    if(preco_total<min){
        preco_total=min;
    }


    printf("O preço para essa corrida foi R$: %.2f", preco_total);


    return 0;
}
