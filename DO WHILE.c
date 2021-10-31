//Média de idade de um grupo de SEIS pessoas.

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    
    float idade1=0, idade2=0, idade3=0, idade4=0, idade5=0, idade6=0, media=0;
    int resp;

    do { // Faça
    system("cls");
    printf("\n Informe a idade da PRIMEIRA pessoa: ");
    scanf("%f", &idade1);
    printf(" Informe a idade da SEGUNDA pessoa: ");
    scanf("%f", &idade2);
    printf(" Informe a idade da TERCEIRA pessoa: ");
    scanf("%f", &idade3);
    printf(" Informe a idade da QUARTA pessoa: ");
    scanf("%f", &idade4);
    printf(" Informe a idade da QUINTA pessoa: ");
    scanf("%f", &idade5);
    printf(" Informe a idade da SEXTA pessoa: ");
    scanf("%f", &idade6);
    
    // Função para calcular a média da idade
    media = (idade1 + idade2 + idade3 + idade4 + idade5 + idade6)/6;
    printf("\n A Media da idade do grupo e de %.1f anos\n", media);

    printf("\n Digite 1 para continuar ou 2 para sair\n");
    scanf("%d", &resp); // Valor de resposta para sair ou retornar ao laço de repetição

    } while (resp==1); // Condição para retornar ao inicio laço de repetição

    return 0;
}
