#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

int v2[5];
char v1[5][10];

char modelo(int k)
{
	  printf("Digite modelo do %do.carro:\n",k+1);
	  scanf("%s",v1[k]);	
}

int consumo(int k)
{  
   int t; 
   char c[2]="0 ";
   do
   {
  	  printf("Digite consumo em lit/km:\n"); 	  
	  scanf(" %d",&v2[k]);
	  t=v2[k];
	  itoa(t,c,10);
	  if (c[0]=='0')
	  { 
	     fflush(stdin);
	     printf("Digite numero\n");
      }
   }
   while (c[0]=='0');   
}

void main() 
{
  int x=0,n=0,y=0,menor=0;
  printf("Digite modelo do carro e seu consumo em lit/km:\n");
  for (x;x<=4;x++) 
  {
  	  fflush(stdin);
  	  modelo(x);
      consumo(x);
  }
  menor=v2[0];
  for (n;n<=4;n++) 
  {	
	if (v2[n]<=menor)
	{
	   menor=v2[n];	
	   y=n;
    } 
  }
  printf("Modelo mais economico: %s",v1[y]);
  for (x=0;x<=4;x++) 
  {
  	 printf("\nQte combustivel para modelo %s percorrer 1000 Km (litros): %d",v1[x],v2[x]*1000); 
  }  
}

