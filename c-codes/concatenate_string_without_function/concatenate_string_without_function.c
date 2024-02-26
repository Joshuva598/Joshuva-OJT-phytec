
#include <stdio.h>
int main ()
{
  char s1[100], s2[100];	
  int i, j;
  printf ("Enter first string:\n");
  fgets (s1, 100, stdin);	
  printf ("Enter second string:\n");
  fgets (s2, 100, stdin);	
  
  
  for (i = 0; s1[i] != '\0'; ++i);
  
  --i;				
  
  
  for (j = 0; s2[j] != '\0'; ++j, ++i)
    {
      s1[i] = s2[j];
    }
  s1[--i] = '\0';		
  printf ("After concatination:%s\n", s1);

  return 0;
}

    
