#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Portuguese");
	
	int op = 0;
	float valorp, calc, juros =0;
	
	printf("-------\n");
	printf("P A G O\n");
	printf("-------\n");
	printf("Digite o valor do produto:");
	scanf("%f", &valorp);
	printf("----------------------------\n");
	printf("C�digo Condi��o de pagamento\n");
	printf("----------------------------\n");
	puts("1 - � vista em dinheiro ou chuque, recebe 10% de desconto.");
	puts("2 - � vista no cart�o de cr�dito, recebe 15% de desconto.");
	puts("3 - Em duas vezes, pre�o normal de etiqueta sem juros.");
	puts("4 - Em tr�s vezes, pre�o normal de eitqueta mais juros de 10%.");
	printf("Digite sua op��o:");
	scanf("%d", &op);
	
	switch (op)
	{
		case 1:
			calc = valorp * 0.1;
			valorp = valorp - calc;
			printf("Voc� ir� pagar R$%.2f", valorp);
		break;
		
		case 2:
			calc = valorp * 0.15;
			valorp = valorp - calc;
			printf("Voc� ir� pagar R$%.2f", valorp);
		break;
		
		case 3:
			calc = valorp / 2;
			printf("Voc� ir� pagar 2 parcelas de R$%.2f", calc); 
		break;
		
		case 4:
			juros = valorp * 0.1;
			valorp = valorp + juros;
			calc = (valorp / 3);
			printf("Voc� ir� pagar 3 parcelas de R$%.2f", calc);			
		break;
		
		default:
			printf("Op��o inv�lida.");
	}	
	
	return 0;
}
