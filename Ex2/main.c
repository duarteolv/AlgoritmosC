#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	int num = 0;
	
	printf("Digite qualquer n�mero natural:");
	scanf("%d", &num);
	
	if((num%2)==0){
		printf("O n�mero %d � par.", num);
		
	} else{
		printf("O n�mero %d � impar.", num);
	}
	
	return 0;
}
