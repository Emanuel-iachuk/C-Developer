    #include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

int chute;
int pontuacao = 0, pontuacaoAreceber = 500;
int tentativas = 5;

void limparTerminal(){
    system("clear");
}

void menu(){
    printf("Digite o seu chute: ");
    scanf("%d", &chute);
    printf("Tentativas: %d\n", tentativas);
    printf("Pontuação a receber: %d\n", pontuacaoAreceber);
}

int main() {
    srand(time(NULL));
    int numeroSecreto = rand() % 10 + 1;
    limparTerminal();

    printf("\n--- JOGO DA ADIVINHAÇÃO ---\n");
        
    while (true) {
        menu();
       

        if (chute == numeroSecreto) {
            printf("Parabéns, você acertou!\n");
            pontuacao += pontuacaoAreceber;
            break;
        }

        --tentativas;
        pontuacaoAreceber -= 100;

        if(tentativas == 0){
            printf("Suas tentativas acabaram\n");
            printf("O número era: %d\n", numeroSecreto);
            break;
        }

        if (chute < numeroSecreto) {
            printf("O número secreto é maior!\n");
        } else {
            printf("O número secreto é menor!\n");
        
        }

        printf("\nPressione ENTER para continuar...");
                getchar(); // Espera o usuário ler
                getchar(); // Pega o ENTER
                limparTerminal();
                printf("--- JOGO DA ADIVINHAÇÃO ---\n");
    }

    printf("Sua pontuação: %d\n", pontuacao);
    return 0;
}
