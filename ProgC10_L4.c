#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char msg[256];

char nome() 
{ 
  int i;
  printf("\nTexto covertido sem espacos:\n");
  for (i=0; i<strlen(msg); i++)
  {
  	if ((msg[i]!=' ') && (msg[i]!='\0'))
  		printf ("%c",msg[i]);
  }  
  return(0);
}

void main() 
{
  while (1) 
  {
    printf("\nDigite um texto com espacos, (FIM) para encerrar:\n");
    fflush(stdin);
    gets(msg);
    if ((strcmp(msg, "FIM")==0) || (strcmp(msg, "fim")==0))
       break;
    nome();
  }
}

