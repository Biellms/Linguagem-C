//Simulando um Elevador que sobe e desce

#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int A, B, i, resp;

    do {
    system("cls");
    printf("\n Pressione seu Andar: ");
    scanf("%d", &A);
    printf(" Pressione o andar de destino: ");
    scanf("%d", &B);

    for (i = A; i <= B; i++) { // Laço de repetição para SUBIR
        printf("\n Andar %d\n", i);
        sleep(1);
    } if (A >= B) { // Laço de repetição para DESCER
        for (i = A; i >= B; i--) {
            printf("\n Andar %d\n", i); 
            sleep(1);
        }
    }

    printf("\n VOCE CHEGOU AO ANDAR DESEJADO!!!\n");
    printf("\n Digite 1 para continuar ou 2 para sair: ");
    scanf("%d", &resp);
    } while (resp == 1);

    return (0);
}