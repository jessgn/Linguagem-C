#include <stdio.h>
#include <stdlib.h>
/*2) FUP que, tendo como entrada o preço e o código de origem de um produto, mostre o preço junto com a
	sua procedência. Caso o código não seja nenhum dos especificados, indicar que o produto é importado.
									Use a tabela abaixo:
								Código de origem Procedência
											1 - Sul
									Maior que 1 e menor que 5 - Norte
									Maior que 4 e menor que 10 - Sudeste
									Maior que 9 e menor que 14 -Norte
									Maior que 14 - Outra Região
*/
int main(int argc, char *argv[]) {
	float preco;
	int codigo;
		printf("Digite o preco do produto: \n");
	scanf("%f",&preco);
		printf("Digite o codigo de origem do produto: \n");
	scanf("%d",&codigo);
	if (codigo == 1) {
		printf(" O preco do produto eh: %f e a procedencia do produto eh= Sul", preco);		
	}
	else if ( codigo > 1 && codigo < 5){
			printf(" O preco do produto eh: %f e a procedencia do produto eh= Norte", preco);
		}
	else if ( codigo > 4 && codigo < 10){
			printf(" O preco do produto eh: %f e a procedencia do produto eh= Sudeste", preco);	
	}
	 else if ( codigo > 9 && codigo < 14){
			printf(" O preco do produto eh: %f e a procedencia do produto eh= Norte ", preco);	
	}
	 else if ( codigo > 14){
			printf(" O preco do produto eh: %f e a procedencia do produto eh= Outra regiao", preco);	
	}
	 else {
			printf(" O preco do produto eh: %f o Produto Importado", preco);	
}
}
