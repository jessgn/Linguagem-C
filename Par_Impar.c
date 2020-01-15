#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int num;
	printf("Digite um numero: ");
    scanf ("%d", &num);
	while (num!=0){
		//	printf("%d",num);
		
	if (num%2==0) {
		printf(" Numero eh par\n"); 
	}
	else if (num%2!=0)
		printf( " Numero eh impar\n");
	
	
    scanf ("%d",&num);
	}
}

