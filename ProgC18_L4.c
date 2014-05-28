#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void main() 
{
  while (1) 
  {
    char msg[256],c;
    int i,p=0;     
    printf("\nDigite texto com 256 caracteres maximo, (FIM) para encerrar:\n");
    fflush(stdin);
    gets(msg);
    if ((strcmp(msg, "FIM")==0) || (strcmp(msg, "fim")==0))
       break;
    printf("\nDigite caracter a ser localizado:\n");
    scanf("%c",&c);  
    printf("\nDigite posicao para inicio da busca:\n");
    scanf("%d",&i);      
    while (msg[i]!='\0')
    {   
    	if (msg[i]==c)
    	{
    	   printf("\n1a. posicao localizada do caracter %c ; %d\n",c,i);
   	       p=1;
   	       break;
    	}
        i++;
	}  
	if (p==0)
       printf("\nCaracter %c nao localizado\n",c);  
  }
}

