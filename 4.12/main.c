#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{   /*Escreva um programa que informe o valor de uma
    corrida de taxi em Bras�lia. A diferen�a em rela��o
    ao exerc�cio anterior � que alguns taxis oferecem um
    desconto de 30%. Altere o programa do exerc�cio
    anterior para que solicite se a corrida possui ou n�o
    desconto de 30% (1 � sim, 2 � n�o).*/
    int band, desc;
    float km, preco,preco_total, mini=3.50;
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

    }
    printf("O t�xi oferece 30% de desconto? <1 - SIM ou 2 - N�o> : ");
    scanf("%d", &desc);
    if(desc == 1){
        preco_total = preco_total*0.7;
    }
    if(preco_total<mini){
        preco_total=mini;
    }

    printf("O valor da corrida R$: %.2f",preco_total);

    return 0;
}
