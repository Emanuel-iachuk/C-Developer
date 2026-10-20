#include <stdio.h>

char nome[10];
int idade;
double altura;

void exibirMensagem(const char* mensagem) {
    printf("%s", mensagem);
}


void dadosPessoais() {
    printf("\n--- Dados Pessoais ---\n");
    printf("Nome: %s\n", nome);
    printf("Idade: %d anos\n", idade);
    printf("Altura: %.2f metros\n", altura);  // ← %f e .2 para 2 casas decimais
    printf("Ano de nascimento: %d\n", 2026 - idade);
}

int main() {

    exibirMensagem("Digite seu nome: ");
    scanf("%s", nome);
    exibirMensagem("Digite sua idade: ");
    scanf("%d", &idade);
    exibirMensagem("Digite sua altura: ");
    scanf("%lf", &altura);

    dadosPessoais();


    return 0;
}
