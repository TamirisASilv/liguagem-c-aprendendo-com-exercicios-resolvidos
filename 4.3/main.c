#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{   /*Escreva um programa que leia a quantidade de alunas
    e de alunos. Depois esse programa deve informar se
    essa turma possui mais alunos ou mais alunas. Se
    essa turma possuir a quantidade de alunas maior que
    a de alunos, informe o total de alunos dessa turma.
    O programa deve verificar se a quantidade de alunos
    é igual a de alunas*/
    int studentB, studentG;
    setlocale(LC_ALL,"portuguese");
    printf("Faculdade Estácio - Análise e desenvolvimento de sistemas\n");
    printf("Aluno(a): Tamiris A Silva\n\n");

    printf("\tComparação entre alunos\n");
    printf("Digite a quantidade de alunos: ");
    scanf("%d", &studentB);
    printf("Digite a quantidade de alunas: ");
    scanf("%d", &studentG);

    if(studentB > studentG){
        printf("\nExistem mais alunos do que alunas\n");
    }
    if(studentG > studentB){
        printf("\nExistem mais alunas do que alunos. O total de alunos é %d\n",studentB+studentG);
    }
    if(studentB == studentG){
        printf("\nHá o mesmo número de alunos e alunas\n");
    }
    return 0;
}
