
#include <stdio.h>
#include <sys/msg.h>
#include <sys/ipc.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 512
struct msgbuf{
   long mtype;
   char mtext[SIZE];
};
int main(){
   key_t key = ftok("./myfile", 65);
   int qid = msgget(key, IPC_CREAT | 0666);

   struct msgbuf msg1;
   msg1.mtype = 10;
   strcpy(msg1.mtext, "Learning is fun\n");
   msgsnd(qid, &msg1, sizeof msg1.mtext, 0);

   struct msgbuf msg2;
   msg2.mtype = 20;
   strcpy(msg2.mtext, "This is GR8\n");
   msgsnd(qid, &msg2, sizeof msg2.mtext, 0);
   return 0;
}
