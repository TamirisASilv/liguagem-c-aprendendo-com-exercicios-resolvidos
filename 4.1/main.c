#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{   /* Desenvolva um programa para comparar a idade de
    Pedro e a de Joana e informar quem ? o mais velho.
    Dados de entrada: idade de Pedro e de Joana (tipo
    das vari?veis: inteiro, e valor em anos). Observa??o:
    essas pessoas possuem idades diferentes*/
    int ageJ, ageP;
    setlocale(LC_ALL,"portuguese");
    printf("Faculdade Est?cio - An?lise e desenvolvimento de sistemas\n");
    printf("Aluno(a): Tamiris A Silva\n\n");

    printf("ATEN??O AS IDADES N?O DEVEM SER IGUAIS");
    printf("\nDigite a idade de Pedro: ");
    scanf("%d",&ageP);
    printf("Digite a idade de Joana: ");
    scanf("%d", &ageJ);

    if(ageP > ageJ){
        printf("\nPedro ? mais velho que Joana\n");
    }
    if(ageJ > ageP){
        printf("\nJoana ? mais velha que Pedro\n");
    }
    return 0;
}
