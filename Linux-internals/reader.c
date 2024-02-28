
#include <stdio.h>
#include <sys/shm.h>
#include <sys/ipc.h>
#include <sys/stat.h>
int main(){

   key_t key = ftok("f1.txt", 65);

   int shmid = shmget(key, 1024, 0666|IPC_CREAT);

   char *buffer = (char*)shmat(shmid, NULL, 0);
   printf("Data read from memory: %s\n", buffer);

   shmdt(buffer);
   return 0;
}
