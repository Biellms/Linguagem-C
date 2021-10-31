#include <stdlib.h>
#include <stdio.h>
#include <string.h>
 
int main(void){
    //variáveis
    char texto[100];//vetor que recebe a entrada feita pelo usuário
    int i, j, contador=0;/*Variáveis para controlar o loop principal, secundário e a quantidade de caracteres encontrados, respectivamente*/
    char vogais[] = "aeiouAEIOU";//vetor de vogais
    
    //captura do texto que será digitado pelo usuário
    printf ("Digite uma frase: ");
    gets(texto);
 
    //contagem de vogais da entrada feita pelo usuário
    for (i=0;i<strlen(texto);i++){
        for (j=0;j<strlen(vogais);j++){
            if (texto[i] == vogais[j]){
                contador++;
            }
        }
    }
    
    //exibição do número de vogais encontradas
    if (contador == 1){
        printf ("\n\nO texto informado possui 1 vogal\n\n");
    }else{
        printf ("\n\nO texto informado possui %d vogais\n\n", contador);
    }
 
    system ("pause");
    return 0;
}