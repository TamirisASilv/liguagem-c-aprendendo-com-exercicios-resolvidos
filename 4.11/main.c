#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{   /*Escreva um programa para informar o valor de
    uma corrida de taxi que considere o valor m�nimo
    da corrida. Ou seja, ao entrar no taxi, o cliente
    deve pagar um valor m�nimo de R$ 3,50, mesmo
    que o tamanho da corrida seja inferior a esse valor.
    O programa deve considerar as informa��es do
    exerc�cio anterior*/
    int band;
    float km, preco, preco_total, min=3.50;
    setlocale(LC_ALL,"portuguese");
    printf("Faculdade Est�cio - An�lise e desenvolvimento de sistemas\n");
    printf("Aluno(a): Tamiris A Silva\n\n");

    printf("\t<<<<<<<<<<TAXIMETRO>>>>>>>>>>\n\n");
    printf("ATEN��O: Taxa m�nima do t�xi R$: 3.50\n");
    printf("Digite o n�mero da bandeira <1 ou 2>: ");
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


    printf("O pre�o para essa corrida foi R$: %.2f", preco_total);


    return 0;
}
