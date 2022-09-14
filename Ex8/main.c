#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
  int peso;
  float altura, imc;

  printf("Informe o peso (em kgs):\n");
  scanf("%d", &peso);
  printf("Informe a altura (em metros):\n");
  scanf("%f", &altura);
  imc = peso / (altura * altura);
  
  if (imc<18.5){
  	printf("Seu imc e: %.2f e voce esta abaixo do peso.", imc);
  	
  } else if (imc>18.5 && imc<25){
  	printf("Seu imc e: %.2f e voce esta com o peso normal", imc);
  	
  } else if (imc>25 && imc<30){
  	printf("Seu imc e: %.2f e voce este acima do peso", imc);
  	
  } else{
  	printf ("Seu imc e: %.2f e voce este obeso", imc);
  }
  
	return 0;
}
