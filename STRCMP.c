#include<stdio.h>
#include<stdlib.h>

void main(){

    char login[15] = "teste";
    char login1[15];
    char senha[15] = "teste";
    char senha1[15];        

    system("cls");
    printf(" Digite o Login: ");
    scanf("%s", &login1);
    printf(" Digite a Senha: ");
    scanf("%s", &senha1);

    // Função STRCMP para fazer a comparação de Strings e retornar um valor.
    if (strcmp(login, login1) == 0 && strcmp(senha, senha1) == 0)
        printf("\n LOGADO!\n\n "); 

        else printf("\n DADOS INVALIDOS!\n\n ");

    system("pause");
    return 0;
}
