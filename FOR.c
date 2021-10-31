//Informe DOIS numeros em ordem CRESCENTE para fazer a soma de TODOS os numeros ENTRE eles.

#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int A, B, i, soma, op;

    do{
    system("cls");
    printf("\n Informe DOIS NUMERO para fazer a soma de TODOS os numeros ENTRE eles!!\n");
    printf("\n VALOR A: ");
    scanf("%d", &A);
    printf(" VALOR B: ");
    scanf("%d", &B);

    soma = 0;

    for (i = A; i <= B; i++) { // Soma em ordem Crescente
            printf(" %d\n", i);
            soma += i;
        } if (A >= B)
            for (i = A; i >= B; --i) { // Soma em ordem Decrescente
            printf(" %d\n", i);
            soma += i;
        }
        
    printf(" TOTAL = %d\n", soma);

    printf("\n A SOMA DE TODOS OS NUMEROS ENTRE %d E %d E IGUAL A %d!!\n\n", A, B, soma);

    printf(" Pressione 1 para calcular novamente ou 2 para sair: ");
    scanf("%d", &op);
    } while (op==1);

    return (0);
}