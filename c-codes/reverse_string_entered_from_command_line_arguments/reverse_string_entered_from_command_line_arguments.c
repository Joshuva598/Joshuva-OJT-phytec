#include<stdio.h>
#include<string.h>
 
int main(int argc, char *argv[]) {
   char temp;
   char *str;
   int i, j;
 
   
   if(argc!=2){
       printf("Invalid Usage.\n");
       printf("Usage Example: ./a.out string_to_reverse");
       return 1;
   }
    
   str = argv[1]; 
   i = 0; 
   j = strlen(str) - 1; 
 
   
   while (i < j) {
      temp = str[i];
      str[i] = str[j];
      str[j] = temp;
      i++;
      j--;
   }
 
   
   printf(str);
   printf("\n");
   return 0;
}
    
