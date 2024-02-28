
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

int main(){
   int fd[2];
   pipe(fd);
   pid_t cpid = fork();
   if (cpid != 0){  
      dup2(fd[1], 1); 
      close(fd[0]); 
      execlp("cat","mycat", "f1.txt", NULL);
   }
   else{  
      dup2(fd[0], 0); 
      close(fd[1]);  
      execlp("wc","mywc", NULL);
   }
}
