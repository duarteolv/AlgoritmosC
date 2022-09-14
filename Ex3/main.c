#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	int a, b, c = 0;
	
	printf("Digite o valor de A:");
	scanf("%d", &a);
	printf("Digite o valor de B:");
	scanf("%d", &b);
	
	if (a==b){
		c = a + b;
		printf("A soma de A=%d + B=%d é igual a: C=%d ", a, b, c);
	
	} else{
		c = a * b;
		printf("A multiplicação de A=%d x B=%d é igual a: C=%d", a, b, c);
	}
	return 0;
}
