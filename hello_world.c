#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>
#include<unistd.h>
#include<errno.h>

static void *thread_fn_callback(void *arg){
  char *input=(char *)arg;
   while(1){

    printf("input string=%s\n",input);
    sleep(1);
}

}

void thread1_create(){
pthread_t pthread1;
static char *thread_input1="i am thread no 1";
int rc=pthread_create(&pthread1,NULL,thread_fn_callback,(void*)thread_input1);
if(rc!=0){
  printf("Error occured,thread could not be created,errno=%d\n",rc);
exit(0);

}

}

int main(int argc,char ** arvgv){
    thread1_create();
    printf("main fn paused\n");
    pause();
    return 0;
}
