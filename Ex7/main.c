#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int op = 0;
	float h, peso = 0;
	
	printf("E S C O L H A\n");
	printf("1 - MASCULINO\n");
	printf("2 - FEMININO\n");
	printf("Digite:");
	scanf("%d", &op);
	
	printf("Digite sua altura, utilize . Ex: 1.75 :");
	scanf("%f", &h);
	
	switch (op)
	{
		case 1:
			peso = (72.7 * h) - 58;
			printf("Seu peso deve ser %.2f", peso);
		break;
		
		case 2:
			peso = (62.1 * h) - 44.7;
		break;
		
		default:
			printf("Opcão inválida.");
	}
	return 0;
}
