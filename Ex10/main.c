#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* Professor eu tive um pouco de problema na interpreta��o do problema, mas acho que estava no caminho certo
   eu usei na MA valores de 0 at� 10 n�o de 0 � 100, porque o calcula n�o estava chegando esse valor, se voc�
   puder me dar um retorno sobre esse c�digo, seja uma corre��o ou algo do tipo eu agrade�o.*/

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Portuguese");
	float n1, n2 , n3, media, ma = 0;
	int numaluno;
	
	printf("-----------------------------------------\n");
	printf("M E D I A   A P R O V E I T A M E N T O\n");
	printf("-----------------------------------------\n");
	printf("Digite o n�mero de identifica��o do aluno:");
	scanf("%d", &numaluno);
	printf("-----------------------------------------\n");
	printf("Digite a primeira nota do aluno %d:", numaluno);
	scanf("%f", &n1);
	printf("Digite a primeira segunda do aluno %d:", numaluno);
	scanf("%f", &n2);
	printf("Digite a primeira terceira do aluno %d:", numaluno);
	scanf("%f", &n3);
	
	media = (n1 + n2 + n3) / 3;
	ma = (n1 + n2 * 2 + n3 * 3 + media)/7;
	
	if (ma>=9){
		printf("ID ALUNO:%d\n", numaluno);
		printf("M�DIA DOS EXERC�CIOS %.1f\n", media);
		printf("MA CONCEITO: A\n");
		printf("Aprovado");
		
	} else if (ma>=7.5 && ma<9){
		printf("ID ALUNO:%d\n", numaluno);
		printf("M�DIA DOS EXERC�CIOS %.1f\n", media);
		printf("MA CONCEITO: B\n");
		printf("Aprovado");
		
	} else if (ma>=6 && ma<7.5){
		printf("ID ALUNO:%d\n", numaluno);
		printf("M�DIA DOS EXERC�CIOS %.1f\n", media);
		printf("MA CONCEITO: C\n");
		printf("Aprovado");
		
	} else if (ma>=4 && ma<6){
		printf("ID ALUNO:%d\n", numaluno);
		printf("M�DIA DOS EXERC�CIOS %.1f\n", media);
		printf("MA CONCEITO: D\n");
		printf("Reprovado");
	} else{
		printf("ID ALUNO:%d\n", numaluno);
		printf("M�DIA DOS EXERC�CIOS %.1f\n", media);
		printf("MA CONCEITO: E\n");
		printf("Reprovado");
	}
	return 0;
}
