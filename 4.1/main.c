#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{   /* Desenvolva um programa para comparar a idade de
    Pedro e a de Joana e informar quem é o mais velho.
    Dados de entrada: idade de Pedro e de Joana (tipo
    das variáveis: inteiro, e valor em anos). Observação:
    essas pessoas possuem idades diferentes*/
    int ageJ, ageP;
    setlocale(LC_ALL,"portuguese");
    printf("Faculdade Estácio - Análise e desenvolvimento de sistemas\n");
    printf("Aluno(a): Tamiris A Silva\n\n");

    printf("ATENÇÃO AS IDADES NÃO DEVEM SER IGUAIS");
    printf("\nDigite a idade de Pedro: ");
    scanf("%d",&ageP);
    printf("Digite a idade de Joana: ");
    scanf("%d", &ageJ);

    if(ageP > ageJ){
        printf("\nPedro é mais velho que Joana\n");
    }
    if(ageJ > ageP){
        printf("\nJoana é mais velha que Pedro\n");
    }
    return 0;
}
