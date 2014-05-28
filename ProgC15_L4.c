#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void main() 
{
  while (1) 
  {
    char msg1[15],msg2[15];
    printf("\nDigite 1o. texto com 15 caracteres maximo, (FIM) para encerrar:\n");
    fflush(stdin);
    gets(msg1);
    if ((strcmp(msg1, "FIM")==0) || (strcmp(msg1, "fim")==0))
       break;
    printf("\nDigite 2o. texto com 15 caracteres maximo, (FIM) para encerrar:\n");
    fflush(stdin);
    gets(msg2);  
    if ((strcmp(msg2, "FIM")==0) || (strcmp(msg2, "fim")==0))
       break;	
    printf("\nTextos concatenados: %s ",msg1);
    int i=strlen(msg2),n=0; 
    for (n=0; n<i; n++)
    {
   	    printf("%c",msg2[n]);
    }    
  }
}

