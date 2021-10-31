#include <stdio.h>
#include <stdlib.h>

	int main(void)
	{
		int a, b, soma, sub, mult, div;
		
		printf("\nDigite o primeiro numero: ");
		scanf("%d", &a);

		printf("Digite o segundo numero: ");
		scanf("%d", &b);

		soma = (a + b);
		sub  = (a - b);
		mult = (a * b);
		div  = (a / b);

		printf("\nA soma dos numeros e igual a: %d", soma);		
		printf("\nA subtracao dos numeros e igual a: %d", sub);
		printf("\nA multiplicacao dos numeros e igual a: %d", mult); 
		printf("\nA divisao dos numeros e igual a: %d", div);

        return (0); 	
	}