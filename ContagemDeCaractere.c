#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    // variáveis
    char texto[100]; //recebe a entrada feita pelo usuário
 
    // captura do texto que será digitado pelo usuário
    printf (" Digite uma frase: ");
    gets(texto);
 
    // contagem de caracteres da entrada feita pelo usuário com strlen
    printf ("\n O texto informado possui %d caracteres\n\n ", strlen(texto));
 
    system ("pause");
    return 0;
}