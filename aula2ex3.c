// Elabore um programa que receba quatro notas e calcule a média aritmética
// entre elas.
#include <stdio.h>

int main() {
    float nota1, nota2, nota3, nota4, media;

    printf("Digite a nota 1: ");
    scanf("%f", &nota1);
    printf("\nDigite a nota 2: ");
    scanf("%f", &nota2);
    printf("\nDigite a nota 3: ");
    scanf("%f", &nota3);
    printf("\nDigite a nota 4: ");
    scanf("%f", &nota4);

    media = (nota1 + nota2 + nota3 + nota4) / 4;

    printf("nota final = %.2f", media);


    return 0;
}