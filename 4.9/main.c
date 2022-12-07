#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{   /*Escreva um programa em C que calcule o volume de
    dois cilindros circulares e que verifique qual deles é
    maior. O raio e altura dos cilindros serão informados
    pelo usuário. Observação: Vπx r2 x h, em que π=3,14,
    r = raio e h = altura.*/
    float ray, height, vol1, vol2, pi=3.14;
    setlocale(LC_ALL,"portuguese");
    printf("Faculdade Estácio - Análise e desenvolvimento de sistemas\n");
    printf("Aluno(a): Tamiris A Silva\n\n");

    printf("Digite o raio do primeiro cilindro: ");
    scanf("%f", &ray);
    printf("Digite a altura do primeiro cilindro: ");
    scanf("%f", &height);
    vol1 = pi*((ray*ray)*height);

    printf("Digite o raio do segundo cilindro: ");
    scanf("%f", &ray);
    printf("Digite a altura do segundo cilindro: ");
    scanf("%f", &height);
    vol2 = pi*(ray*ray)*height;

    printf("\nO volume do primeiro cilindro é: %.2f\n",vol1);
    printf("\nO volume do segundo cilindro é: %.2f\n", vol2);

    if(vol1 > vol2){
        printf("O volume do primeiro cilindro é maior que a do segundo.");
    }
    if(vol2 > vol1){
        printf("O volume do segundo cilindro é maior que a do primeiro.");
    }
    if(vol1 == vol2){
        printf("O volume dos dois cilindros são iguais.");
    }



    return 0;
}
