#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	int num, res = 0;
	printf("Se o número for positivo você vai obter o dobro dele, se for negativo o triplo.\n");
	printf("Digite um número:");
	scanf("%d", &num);
	
	if (num>0) {
		res = num * 2;
		printf("O dobro de %d é:%d", num, res);
	} else if (num<0) {
		res = num * 3;
		printf("O triplo de %d é:%d", num, res);
	} else{
		printf("Não é possivel calcular com 0.");
	}
	return 0;
}
