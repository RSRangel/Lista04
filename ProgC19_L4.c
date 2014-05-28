#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void main() 
{
  while (1) 
  {
    char msg[256];
    int i,f,p=0;     
    printf("\nDigite texto com 256 caracteres maximo, (FIM) para encerrar:\n");
    fflush(stdin);
    gets(msg);
    if ((strcmp(msg, "FIM")==0) || (strcmp(msg, "fim")==0))
       break;
    printf("\nDigite 1o. digito da sequncia:\n");
    scanf("%d",&i);  
    printf("\nDigite 2o. digito da sequencia:\n");
    scanf("%d",&f);  
    printf("\nTexto do intervalo entre %d e %d:\n",i,f);    
    while (msg[p]!='\0')
    {   
    	if ((p>=(i-1)) && (p<=(f-1)))
    	{
    	   printf("%c",msg[p]);
   	   	}
        p++;
	}  
  }
}

