#include <stdio.h>
#include <stdbool.h>

int caixaDeDinheiro(bool cartao) {
    double valorNaConta = 1500.00, valorDigitado;
    int senha = 123, senhaDigitada;
    int digitoMenu;

    if (cartao){
        do{
            printf("Digite [1] se quiser sacar. \ndigite [2] se quiser depositar. \ndigite [0] para finalizar \n\n ");
            if(scanf("%d", &digitoMenu) != 1) {
                printf("\nErro\n");
                while(getchar() != '\n');
                digitoMenu = -1;
                continue;
            }
            if (digitoMenu < 0 || digitoMenu > 2) {
                printf("\nNumero invalido\n");
                continue;
            }


            if (digitoMenu == 1) {
                printf("Digite sua senha: ");
                scanf("%d", &senhaDigitada);

                if (senhaDigitada == senha) {
                    printf("Digite o valor que vc quer sacar: ");
                    scanf("%lf", &valorDigitado);
                    if (valorDigitado <= valorNaConta) {
                        valorNaConta -= valorDigitado;
                        printf("Foi realizado um saque no valor de %f", valorDigitado);
                    }else {
                        printf("Saldo insuficiente");
                    }
                }else {
                    printf("Senha incorreta");
                }
            }
        }while (digitoMenu != 0);
        printf("Obrigado por usar nossos servisos!");
        return 0;
    }

    printf("Insira o cartão porfavor!");
    return 1;
}


int main() {
    caixaDeDinheiro(true);


}