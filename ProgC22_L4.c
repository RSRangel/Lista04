#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void main() 
{
  while (1) 
  {
    char msg[256];
    int i=0;
    printf("\nDigite texto com 256 caracteres maximo em maisculas, (FIM) para encerrar:\n");
    fflush(stdin);
    gets(msg);
    if ((strcmp(msg, "FIM")==0) || (strcmp(msg, "fim")==0))
       break;
    while (msg[i]!='\0')
    {   
    	   printf("%c",msg[i]+32);
    	   i++;
 	}  
  }
}

