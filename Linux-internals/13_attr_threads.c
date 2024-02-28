
#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

void* f1(void *);
int thread_finished = 0;
int main(){
   pthread_t tid;

   pthread_attr_t thread_attr;

   pthread_attr_init(&thread_attr);

   pthread_attr_setdetachstate(&thread_attr, PTHREAD_CREATE_DETACHED);

   pthread_create(&tid, &thread_attr, f1, NULL);

   pthread_attr_destroy(&thread_attr);
   while(thread_finished == 0){
      printf("Waiting for child thread to finish...\n");
      sleep(2);
   }
   printf("Main thread exiting,Bye!\n");
   return 0;
}

void * f1(void* args){
   printf("Child thread is running...\n");
   sleep(8);
   printf("Child thread setting the finished flag, and exiting.\n");
   thread_finished = 1;
   pthread_exit(NULL);
}
