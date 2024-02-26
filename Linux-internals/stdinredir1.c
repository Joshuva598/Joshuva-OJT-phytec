#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
int main(){
   char	line[100];

   fgets(line, 100, stdin ); 
   printf("%s", line);

   close(0);
   int fd = open("/etc/passwd", O_RDONLY);

   fgets(line, 100, stdin); 
   printf("%s", line);
   return 0;
}
