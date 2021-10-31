#include <stdio.h>
#include <stdlib.h>

int main(void) {

    char nome[100];

    // Método simples de para printar uma String
    system("cls");
    printf("\n Digite seu nome: ");
    scanf("%[^\n]s", &nome);

    printf("\n Ola %s, Seja bem Vindo!!\n\n ", nome);
    system("pause");

    return (0);

}