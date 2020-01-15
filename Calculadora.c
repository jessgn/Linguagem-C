#include <stdio.h>
#include <stdlib.h>
/*6) FUP que leia dois números e a operação aritmética desejada (+, –, *, /). Após a leitura (LEIA N1, N2,
OP) calcule e mostre a resposta da operação realizada.*/
int main(int argc, char *argv[]){
	int sinal;
	float num1,num2,resultado;
	printf("Digite o primeiro numero:\n");
	scanf("%f",&num1);
	printf("Digite o segundo numero:\n");
	scanf("%f",&num2);
	printf("Digite a operacao a ser realizada:\n");
		printf("1- Soma \n");
		printf("2- Subtracao \n");
		printf("3- Divisao \n");
		printf("4- Multiplicacao \n");
		scanf("%d",&sinal);
		switch (sinal){
			case 1:
				printf("A operacao a ser realizada eh a de SOMA!\n");
					resultado= num1+ num2;
					printf("O resultado eh: %.2f", resultado);
				break;
			case 2:
				printf("A opracao a ser realizada eh a de SUBTRACAO:\n");
					resultado= num1 - num2;
					printf("O resultado eh: %.2f", resultado);
					break;
			case 3:
				printf("A opracao a ser realizada eh a de DIVISAO:\n");
					resultado= num1 / num2;
					printf("O resultado eh: %.2f", resultado);
					break;
			case 4:
			printf("A opracao a ser realizada eh a de SUBTRACAO:\n");
				resultado= num1 * num2;
				printf("O resultado eh: %.2f", resultado);
				break;
			default	:
				printf("Valor invalido.");
				break;
			}
}
