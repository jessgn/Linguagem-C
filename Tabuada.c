#include <stdio.h>
#include <stdlib.h>
/*9) FUP que leia um n�mero (maior que zero e menor que 11 � VALIDAR), ap�s mostre a tabuada do
n�mero lido. (Ex.: leu 5, mostrar 5x1=5; 5x2=10; etc.)*/

int main (void){
	int num, tab, resultado;
	printf("Digite um numero entre 1 e 11 para saber sua tabuada:");
	scanf("%d",&num);
	if (num > 0 && num < 11){
		for (tab <0 ; tab <= 10; tab++){
		printf("%dx%d=%d\n",num,tab,num*tab);
		}
	}
	else{
		printf("Opcao invalida!");
	}
}
