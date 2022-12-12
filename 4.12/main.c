#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{   /*Escreva um programa que informe o valor de uma
    corrida de taxi em Brasília. A diferença em relação
    ao exercício anterior é que alguns taxis oferecem um
    desconto de 30%. Altere o programa do exercício
    anterior para que solicite se a corrida possui ou não
    desconto de 30% (1 – sim, 2 – não).*/
    int band, desc;
    float km, preco,preco_total, mini=3.50;
    setlocale(LC_ALL,"portuguese");
    printf("Faculdade Estácio - Análise e desenvolvimento de sistemas\n");
    printf("Aluno(a): Tamiris A Silva\n\n");

    printf("Digite o número da bandeira <1 ou 2>: ");
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
    printf("O táxi oferece 30% de desconto? <1 - SIM ou 2 - Não> : ");
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
