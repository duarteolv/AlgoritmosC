#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	int num, res = 0;
	printf("Se o n�mero for positivo voc� vai obter o dobro dele, se for negativo o triplo.\n");
	printf("Digite um n�mero:");
	scanf("%d", &num);
	
	if (num>0) {
		res = num * 2;
		printf("O dobro de %d �:%d", num, res);
	} else if (num<0) {
		res = num * 3;
		printf("O triplo de %d �:%d", num, res);
	} else{
		printf("N�o � possivel calcular com 0.");
	}
	return 0;
}
