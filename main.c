#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]){
	
	setlocale(LC_ALL,"Portuguese");
	
	float peso, altura, imc;
	
	printf("Calculadora de IMC\n");
	 printf("Pressione Enter para continuar...\n");
	 getchar();
	 
    printf("Qual seu peso:");
     scanf("%f", &peso);
	
	printf("Qual sua altura:");
	 scanf("%f", &altura);	 
	 
	printf("Voce tem %.2f kgs e %.2f mts.\n", peso, altura);
	
	imc = peso / (altura * altura) ;

	if (imc <18.5){
	 printf("Seu IMC é %.2f e você está abaixo do peso.\n", imc);}
     
	 else if (imc <24.9){
	 	printf("Seu IMC é %.2f e você está no seu peso normal.\n", imc);}
	 
	 else if(imc <29.9){
	     printf("Seu IMC é %.2f e você está com sobrepeso.\n", imc);}
	 
	 else if (imc <34.9){
	     printf("Seu IMC é %.2f e você está com besidade Grau I.\n", imc);}
	 
	 else if(imc <39.9){
	 	printf("Seu IMC é %.2f e você está com besidade Grau II.\n", imc);}
	 
	 else if(imc >40){
	     printf("Seu IMC é %.2f e você está com obesidade Grau III.\n", imc);}
	 
	 
   system("pause");
}
