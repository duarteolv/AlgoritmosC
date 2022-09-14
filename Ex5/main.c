#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Portuguese");
	
	int num, res = 0;
	
	printf("Se o número for par vai somar 5, se for ímpar vai somar 8.\n");
	printf("Digite um número:");
	scanf("%d", &num);
	
	if ((num%2)==0) {
		res = num + 5;
		printf("Peguei %d e somei mais 5, resultado: %d", num, res);
		
		} else {
			res = num + 8;
			printf("Peguei %d e somei mais 8, resultado: %d", num, res);
		}
	return 0;
}
