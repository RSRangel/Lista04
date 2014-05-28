#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

void main()
{
	while (1)
	{
		char nome[256];
		int x;
		printf("\nDigite um nome (FIM para encerrar): \n");
		gets(nome);	
	    if ((strcmp(nome, "FIM")==0) || (strcmp(nome, "fim")==0))
    	   break;
		printf("Nome invertido: \n");
		x=strlen(nome)-1;	   	
		for (x; x>=0; x--)
		{
			printf("%c",nome[x]);			
		}
	}
}
