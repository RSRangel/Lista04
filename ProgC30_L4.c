#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

void main()
{
	while (1)
	{
		char nome[256];
		printf("Digite um nome (FIM para encerrar): \n");
		gets(nome);	
	    if ((strcmp(nome, "FIM")==0) || (strcmp(nome, "fim")==0))
    	   break;	
		if ((nome[0]!='a') && (nome[0]!='A'))
			printf("\nNome: %s\n",&nome);	
	}
}
