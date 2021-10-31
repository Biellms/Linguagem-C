// Simulando a catraca de um onibus

#include <stdio.h>
#include <stdlib.h>

int main() {

    float Saldo_bilhete, Valor_passagem, saldo;
    int resp;

    do {
    system("cls");
    printf("\nAPROXIME O BILHETE!\n");
    printf("\nSaldo no Bilhete: ");
    scanf("%f", &Saldo_bilhete);
    printf("Valor da Passagem: ");
    scanf("%f", &Valor_passagem);

    saldo = (Saldo_bilhete - Valor_passagem);

    // Condição para passar a Catraca
    if (Saldo_bilhete >= Valor_passagem) {
        printf("\nPASSAR CATRACA!\n");
        printf("\nSaldo = R$%.2f\n", saldo);
    } else {
            printf("\nSALDO INSUFICIENTE!\n");
            printf("\nSeu saldo de R$%.2f e insuficiente\n", Saldo_bilhete);
        }

    printf("\nDigite 1 para continuar ou 2 para sair\n");
    scanf("%d", &resp);

    } while (resp == 1);

    return 0;
}