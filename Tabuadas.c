#include <stdio.h>
#include <stdlib.h>
//10) FUP que mostre a tabuada dos números entre 1 e 10.

int main (void){
	int num, tab;
	printf("As tabuadas entre 1 e 10 sao: ");
	for (num=1; num<=10; num++){
		for(tab=0; tab<=10;tab++){
		printf("%dx%d=%d\n", num,tab,tab*num);
	}
}
}
