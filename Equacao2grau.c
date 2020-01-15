#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(int argc, char *argv[]) {
	float a,b,c,delta, x1, x2, raiz, aux, y, y1,y2, aux2;
	printf("Qual o valor de a?\n");
	scanf("%f",&a);
	printf("Qual o valor de b?\n");
	scanf("%f",&b);
	printf("Qual o valor de c?\n");
	scanf("%f",&c);
	delta= ((b*b)-4*(a*c));
// printf("O resultado foi : %f\n", delta);
    raiz=sqrt(delta);
    printf("A raiz de delta eh: %f\n", raiz);
     if (b<0){
     aux = b*(-1);
     printf("Esse eh o valor de b %f\n", aux);
	 }
	 else (b=b);
	 {
     aux =b;
 }
 	y=2*a;
 //	if(aux<0){
 		aux2= aux*(-1);
	 }
	 	 else (aux=aux);
	 {
    aux2 =aux;
 }
	y1=-aux2+raiz;
 	x1= (y1/y);
 	printf("O valor da primeira raiz eh: %f\n",x1);
 	y2=-aux2-raiz;
	x2= (y2/y);
 	printf("O valor da segunda raiz eh: %f\n",x2);
}
