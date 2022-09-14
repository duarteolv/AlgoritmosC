#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Portuguese");
	
	int a, b, c = 0;
	
	printf("Digite o valor de A:");
	scanf("%d", &a);
	printf("Digite o valor de B:");
	scanf("%d", &b);
	printf("Digite o valor de C:");
	scanf("%d", &c);
	
	if((a+b)<c){
		
		printf("A soma de A=%d + B=%d é menor que C=%d.", a,b,c);
	}
	
	
	return 0;
}
