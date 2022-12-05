#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{   /*Desenvolva um programa para comparar a idade de
    Pedro, de Joana e de Ismael e informar quem é o mais
    velho. Dados de entrada: idade de Pedro, de Joana e
    de Ismael (tipo das variáveis: inteiro, e valor em anos).
    Considere que essas pessoas possuem idades diferentes. */
    int ageJ, ageP, ageI;
    setlocale(LC_ALL,"portuguese");
    printf("Faculdade Estácio - Análise e desenvolvimento de sistemas\n");
    printf("Aluno(a): Tamiris A Silva\n\n");

    printf("Qual a idade de Joana: ");
    scanf("%d", &ageJ);
    printf("Qual a idade de Pedro: ");
    scanf("%d", &ageP);
    printf("Qual a idade de Ismael: ");
    scanf("%d", &ageI);

    if((ageJ > ageP) && (ageJ > ageI)){
        printf("\nJoana é a mais velha dentre os três: \n");
    }
    if((ageP > ageJ) && (ageP > ageI)){
        printf("\nPedro é o mais velho dentre os três: \n");
    }
    if((ageI > ageP) && (ageI > ageJ)){
        printf("\nIsmael é o mais velho dentre os três: \n");
    }

    return 0;
}
