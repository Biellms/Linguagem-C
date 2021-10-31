//A SENHA É: 12345

#include <stdio.h>
#include <stdlib.h>

int main() {

    char us[50] = "Gabriel";
    char us1[50];
    char senha[50] = "12345";
    char senha2[50];

    
    while (strcmp(us1, us) == 0 ) { // Condição para continuar o lçao de repetição
    printf("\n Informe seu usuario: ");
    scanf("%s", &us1);
        if (strcmp(us1, us) == 0 ) { // Comparação de Usuario
        printf("\n USUARIO INCORRETO\n"); 
        } else { 
            while (strcmp (senha2, senha) == 0) {
                printf(" Digite sua senha: ");
                scanf("%s", &senha2);

                    if (strcmp (senha2, senha) == 0) { // Comparação de Senha
                    printf("\n SENHA INCORRETA!!\n");
                    } else 
                    printf("\n Ola %s, Seja bem vindo!!\n\n", us);
                     }
                }   
    }


    system("pause");
    return 0;

}