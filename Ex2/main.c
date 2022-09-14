#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	int num = 0;
	
	printf("Digite qualquer número natural:");
	scanf("%d", &num);
	
	if((num%2)==0){
		printf("O número %d é par.", num);
		
	} else{
		printf("O número %d é impar.", num);
	}
	
	return 0;
}
