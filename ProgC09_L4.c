#include <stdio.h>
#include <string.h>

char msg[256];

char nome() 
{ 
  int i;
  printf("\nNome covertido para maiusculas:\n");
  for (i=0; i<strlen(msg); i++)
  {
  	printf ("%c",msg[i]-32);
  }  
  return(0);
}

void main() 
{
  while (1) 
  {
    printf("\nDigite um nome em minusculas, (FIM) para encerrar:\n");
    fflush(stdin);
    gets(msg);
    if ((strcmp(msg, "FIM")==0) || (strcmp(msg, "fim")==0))
       break;
    nome();
  }
}

