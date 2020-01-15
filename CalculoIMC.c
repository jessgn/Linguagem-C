#include <stdio.h>
#include <stdlib.h>
/*7) FUP que utilizando o IMC (Índice de Massa Corporal) = peso/altura², leia o peso e a altura de um adulto,
mostre a sua condição segundo a tabela abaixo:
IMC em adultos 			Condição
Abaixo de 18,5 			Abaixo do peso
Acima de 18,5 e 25 		Peso normal
Acima de 25 e 30 		Acima do peso
Acima de 30 				Obeso
*/
int main(int argc, char *argv[]){
	float peso,altura,imc;
	printf( "Digite seu peso (neste formato -> 0.00 ):\n");
	scanf("%f",&peso);
	printf("Digite a sua altura (neste formato -> 0.00 ):\n");
	scanf("%f",&altura);
	imc= (peso/(altura*altura));
	printf("Seu IMC eh: %.2f\n", imc);
	if (imc < 18.50){
		printf("Abaixo do peso");
	}
	else if (imc > 18.50 && imc <= 25){
		printf("Peso normal");
	}
	else if (imc > 25 && imc <= 30 ){
		printf("Acima do peso");
	}
	else {
		printf("Obeso");
	}
}


