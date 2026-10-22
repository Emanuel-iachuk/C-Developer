#include <stdio.h>

int main() {
    int numero;
    printf("Digite o numero desejado: ");
    scanf("%d", &numero);

    int ant = numero - 1;
    int suc = numero + 1;

    printf("Numero = %d", numero);
    printf("\nAntecessor = %d", ant);
    printf("\nSucessor = %d", suc);

    return 0;
}
