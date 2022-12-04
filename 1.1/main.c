#include <stdio.h>
#include <stdlib.h>
//Escreva um programa que leia o número de alunos e alunas de uma sala. Como saída, o programa deve apresentar
//o número de alunos e em seguida o de alunas.
int main(){
    int girl_student, boy_student;
    printf("Faculdade Estacio - Analise e desenvolvimento de sistemas\n");
    printf("Aluno(a): Tamiris A Silva\n\n\n");

    printf("Digite o numero de alunos: ");
    scanf("%d",&boy_student);
    printf("Digite o numero de alunas: ");
    scanf("%d",&girl_student);

    printf("\n\nO numero de alunos: %d\n",boy_student);
    printf("O numero de alunas: %d\n",girl_student);
    return 0;
}
