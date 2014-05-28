#include <stdio.h>
#include <stdlib.h>

char msg[256];

char nome() 
{ 
  int i;
  printf("\n4 primeiras letras:\n");
  for (i=0; i<4; i++)
  {
  	printf ("%c",msg[i]);
  }  
  return(0);
}

void main() 
{
  while (1) 
  {
    printf("\nDigite um nome, (FIM) para encerrar:\n");
    fflush(stdin); // limpa o buffer do teclado
    gets(msg);
    if ((strcmp(msg, "FIM")==0) || (strcmp(msg, "fim")==0))
       break;
    nome();
  }
}

