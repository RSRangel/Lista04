#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void main() 
{
  while (1) 
  {
    char msg[30],c;
    int n=0;     
    printf("\nDigite texto com 30 caracteres maximo, (FIM) para encerrar:\n");
    fflush(stdin);
    gets(msg);
    if ((strcmp(msg, "FIM")==0) || (strcmp(msg, "fim")==0))
       break;
    printf("\nDigite caracter a ser eliminado:\n");
    scanf("%c",&c);  
    printf("\nTexto sem o caracter: %c \n",c);
    while (msg[n]!='\0')
    {   
    	if (msg[n]!=c)
   	       printf("%c",msg[n]);
        n++;
	}    
  }
}

