// Elabore um programa que receba quatro notas e calcule a média aritmética
// entre elas.
#include <stdio.h>

float pedirNota(const char* mensagem) {
    float valor;
    int resultado;

    do {
        printf("%s", mensagem);
        resultado = scanf("%f", &valor);

        if (resultado == 1) {
            printf("✅ Número lido: %.2f\n", valor);
        } else {
            printf("❌ Isso não é um número! Tente de novo.\n");
            while(getchar() != '\n'); // limpa o que sobrou
        }

    } while (resultado != 1); // repete até acertar

    return valor; // devolve o número certo
}



int main() {
    float nota1, nota2, nota3, nota4, media;

    nota1 = pedirNota("Digite a nota 1: ");
    nota2 = pedirNota("\nDigite a nota 2: ");
    nota3 = pedirNota("\nDigite a nota 3: ");
    nota4 = pedirNota("\nDigite a nota 4: ");

    media = (nota1 + nota2 + nota3 + nota4) / 4;

    printf("\nnota final = %.2f", media);


    return 0;
}