#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char msg1[256],msg2[256];

char nome() 
{ 
  int i=strlen(msg1)-1,n=0;
  for (i; i>=0; i--)
  {
  	if (msg1[i]=='A')
  	   msg2[n]='*';
   else
   	   msg2[n]=msg1[i];
   n++;
  }
  printf("\nTexto invertido e A trocado por * : %s \n",msg2);
  return(0);
}

void main() 
{
  while (1) 
  {
    printf("\nDigite um texto, (FIM) para encerrar:\n");
    fflush(stdin);
    gets(msg1);
    if ((strcmp(msg1, "FIM")==0) || (strcmp(msg1, "fim")==0))
       break;
    nome();
  }
}

