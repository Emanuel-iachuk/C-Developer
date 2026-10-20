#include <stdio.h>

void exibirMensagem(const char* mensagem) {
    printf("%s", mensagem);
}


void dadosPessoais(const char* nome, int idade, double altura) {
    printf("\n--- Dados Pessoais ---\n");
    printf("Nome: %s\n", nome);
    printf("Idade: %d anos\n", idade);
    printf("Altura: %.2f metros\n", altura);  // ← %f e .2 para 2 casas decimais
    printf("Ano de nascimento: %d\n", 2026 - idade);
}

int main() {
    char nome[50];
    int idade;
    double altura;

    exibirMensagem("Digite seu nome: ");
    scanf("%s", nome);
    exibirMensagem("Digite sua idade: ");
    scanf("%d", &idade);
    exibirMensagem("Digite sua altura: ");
    scanf("%lf", &altura);

    dadosPessoais(nome, idade, altura);


    return 0;
}
