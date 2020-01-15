#include <stdio.h>

int main (){
    int num;
    float num1 ,a;
    printf("Digite um numero que deseja separar a parte decimal da parte flutuante\n");
    scanf ("%f",&num1);
    num=num1;
    printf ("\n%d",num);
    a=num;
    num1=num1-a;
    printf("\n%f",num1);
}
