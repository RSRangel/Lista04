#include <stdio.h> 
#include <string.h> 

void main()
{
	char str1[256], str2[256];
	printf("Digite 1a. string: "); 
	scanf("%s", &str1); 
	printf("\nDigite 2a. string: "); 
	scanf("%s", &str2); 
	if (strcmp(str1,str2)==0) 
	{ 
		printf("\nStrings identicas"); 
	} 
	else
	{ 
		printf("\nStrings diferentes"); 
	} 
} 

