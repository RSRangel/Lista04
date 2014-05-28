#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char msg[256];
int n=3;

char criptografar() 
{ 
  int i; 	
  for (i=0; i<strlen(msg); i++)
  {
  	msg[i] = msg[i] + n;
  }  
  return(0);
}

void main() 
{
  while (1) 
  {
    printf("\nDigite um texto para criptografar, (FIM) para encerrar:\n");
    fflush(stdin);
    gets(msg);
    if ((strcmp(msg, "FIM")==0) || (strcmp(msg, "fim")==0))
       break;
    criptografar();
    printf("\nMensagem criptografada = %s", msg);
  }
}


