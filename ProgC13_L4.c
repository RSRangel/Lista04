#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char msg1[50],msg2[50];

char nome() 
{ 
  int i=strlen(msg1),n=0;
  for (n=0; n<i; n++)
  {
   	   msg2[n]=msg1[n]+1;
  }
  return(0);
}

void main() 
{
  while (1) 
  {
    printf("\nDigite um texto com 50 caracteres maximo, (FIM) para encerrar:\n");
    fflush(stdin);
    gets(msg1);
    if ((strcmp(msg1, "FIM")==0) || (strcmp(msg1, "fim")==0))
       break;
    nome();
    printf("\nTexto alterado com ASCII+1 : %s \n",msg2);
  }
}

