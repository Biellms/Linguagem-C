//IF ELSE Onde não aceita números NEGATIVOS, apenas POSITIVOS.

#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int a, b, resp;

    do {
    system("cls");
    printf("\n digite o valor A = ");
    scanf("%d", &a);
    if(a < 0) { // A menor que 0
        printf("\n NUMERO INVALIDO, DIGITE UM NUMERO POSITIVO!!\n");
        printf("\n digite o valor A = ");
        scanf("%d", &a);
    }

    printf(" digite o valor B = ");
    scanf("%d", &b);

    if(b < 0) { // B menor que 0
        printf("\n NUMERO INVALIDO, DIGITE UM NUMERO POSITIVO!!\n");
        printf("\n digite o valor B = ");
        scanf("%d", &b);
    }

    if (a > b) // A maior que B
        printf(" O VALOR A = %d E MAIOR!!\n", a);
    else
        if (a < b) // B maior que A
            printf(" O VALOR B = %d E MAIOR!!\n", b);
        else  // Caso os valores seja iguais
        printf(" OS VALORES A e B SAO IGUAIS!!\n");

        printf("\n Digite 1 para continuar ou 2 para sair: ");
        scanf("%d", &resp);

    } while (resp == 1);

    return (0);
}