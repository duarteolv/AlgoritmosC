#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	int a, b, c= 0;
	
	printf("Digite o primeiro valor:");
	scanf("%d", &a);
	printf("Digite o segundo valor:");
	scanf("%d", &b);
	printf("Digite o terceiro valor:");
	scanf("%d", &c);

	if (a>b && b>c){
		printf("%d %d %d", a, b, c);
			
	} else if (c>b && b>a){
	printf("%d %d %d", c, b, a);
	
	} else if (a>b && c>b){
		printf("%d %d %d", a, c, b);
		
	} else if (c>b && a>b){
		printf("%d %d %d", c, a, b);
		
	} else if (b>a && a>c){
		printf("%d %d %d", b, a, c);
		
	} else if (b>a && c>a){
		printf("%d %d %d", b, c, a);
		
	} else {
		printf("Os números não são todos diferentes");
	}
	
	return 0;
}
