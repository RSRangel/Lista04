#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

void main()
{
	while (1)
	{
		char nome[256],c;
		int x,y,n=0;
		printf("\nDigite um nome (FIM para encerrar): \n");
 		fflush(stdin);
		gets(nome);	
	    if ((strcmp(nome, "FIM")==0) || (strcmp(nome, "fim")==0))
    	   break;
		x=strlen(nome)-1;	   	
		while (x>=0)
		{
			if ((nome[x]=='a') || (nome[x]=='e') || (nome[x]=='i') || (nome[x]=='o') ||
			(nome[x]=='u') || (nome[x]=='A') || (nome[x]=='E') ||(nome[x]=='I') ||
			(nome[x]=='O') || (nome[x]=='U') )	
			     n++;
			x--;		
		}
		printf("Quantidade de vogais: %d\n",n);	
		printf("\nDigite um caracter: \n");
		scanf("%c",&c);		
		printf("Nome alterado com caracter: \n");	
		x=strlen(nome)-1;	   	
		for (y=0;y<=x;y++)
		{
			if ((nome[y]=='a') || (nome[y]=='e') || (nome[y]=='i') || (nome[y]=='o') ||
			(nome[y]=='u') || (nome[y]=='A') || (nome[y]=='E') ||(nome[y]=='I') ||
			(nome[y]=='O') || (nome[y]=='U') )	
			     printf("%c",c);
			else
			     printf("%c",nome[y]);     		
		}			
	}
}
