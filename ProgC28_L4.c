#include <stdlib.h>
#include <stdio.h>
#include <math.h>

void main()
{
	char nome[30], sexo;
	int idade;
	printf("Informe seu nome: ");
	gets(nome);
	printf("Informe seu sexo: ");
	scanf("%c",&sexo);
	printf("Informe sua idade: ");
	scanf("%d",&idade);
	if (sexo == 'f' || sexo == 'F' && idade < 25)
		printf("\n%s. ACEITA.\n\n", nome);
	else
		printf("\nNAO ACEITA.\n\n");
	system("PAUSE");
}
