#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
int main(){
   int fd1, fd2, n;
   char buff[10];
   fd1 = open ("abc.txt", O_RDONLY);
   fd2 = open ("abc.txt", O_RDONLY);
  
   n = read (fd1, buff, 5);
   write(1, buff, n);

   n = read (fd2, buff, 5);
   write(1, buff, n);

   n = read (fd1, buff, 5);
   write(1, buff, n);
   return 0;
}
