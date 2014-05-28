#include <stdio.h>
#include <string.h>
#include <ctype.h>

void main() 
{
  int i, j, eh;
  char s[80];
  printf("Informe uma palavra:\n");
  gets(s);
  int n = strlen(s);
  i = 0;
  j = (n - 1);
  eh = 1;
  while ((i <= j) && (eh == 1)) 
  {
    if (toupper(s[i]) != toupper(s[j]))
       eh = 0;
    else 
	{
      i = i + 1;
      j = j - 1;
    }
  }

  if (eh == 1)
     printf("\n%s e um palindromo.", s);
  else
     printf("\n%s nao e um palindromo.", s);
}

