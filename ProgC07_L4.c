#include <stdio.h>
#include <string.h>

int main() 
{
    char str[256];
    int i;
    printf("Digite o texto: ");
    gets(str);
    printf("Texto sem vogais: ");
    for(i=0; i<strlen(str); i++) 
	{
       if (!(str[i] == 'A' ||str[i] == 'a' || str[i] == 'E' || str[i] == 'e' ||
	   str[i] == 'I' ||  str[i] == 'i'|| str[i] == 'O' || str[i] == 'o' || 
	   str[i] == 'U' ||  str[i] == 'u'))      		
		  printf("%c", (str[i]));
    }
}
