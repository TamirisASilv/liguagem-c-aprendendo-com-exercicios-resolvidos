#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{   /*Desenvolva um programa para comparar a idade de
    Pedro, de Joana e de Ismael e informar quem � o mais
    velho. Dados de entrada: idade de Pedro, de Joana e
    de Ismael (tipo das vari�veis: inteiro, e valor em anos).
    Considere que essas pessoas possuem idades diferentes. */
    int ageJ, ageP, ageI;
    setlocale(LC_ALL,"portuguese");
    printf("Faculdade Est�cio - An�lise e desenvolvimento de sistemas\n");
    printf("Aluno(a): Tamiris A Silva\n\n");

    printf("Qual a idade de Joana: ");
    scanf("%d", &ageJ);
    printf("Qual a idade de Pedro: ");
    scanf("%d", &ageP);
    printf("Qual a idade de Ismael: ");
    scanf("%d", &ageI);

    if((ageJ > ageP) && (ageJ > ageI)){
        printf("\nJoana � a mais velha dentre os tr�s: \n");
    }
    if((ageP > ageJ) && (ageP > ageI)){
        printf("\nPedro � o mais velho dentre os tr�s: \n");
    }
    if((ageI > ageP) && (ageI > ageJ)){
        printf("\nIsmael � o mais velho dentre os tr�s: \n");
    }

    return 0;
}
