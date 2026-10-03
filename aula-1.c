#include <stdio.h> // Biblioteca padrão de entrada e saída

int main(){ // Função principal do programa

    char name[50];// Declaração de uma variável para armazenar o nome do usuário
    scanf("%s", name); // Lê o nome do usuário a partir da entrada padrão

    if (name[0] == '\0') {
        printf("nome não fornecido\n");
        return (1);
    }


    printf("Hello, %s!\n", name);
    return (0);
}