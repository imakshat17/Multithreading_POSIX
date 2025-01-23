#include<stdio.h>
#include<pthread.h>
#include<unistd.h>
#include<errno.h>
#include<stdlib.h>

struct point{
  int x;
  int y;
};
static void * getStruct(void* arg){
  struct  point* p=(struct point*)arg;
   printf("x value--->%d\n",p->x);
   printf("Y value--->%d\n",p->y);
    return NULL; 

}
int main(int argc,char **argv){
   pthread_t pthread1;
	struct point p;
	p.x=10;
	p.y=11;
    pthread_create(&pthread1,NULL,&getStruct,(void*)&p);
    printf("Main function is running\n");
     //pause();
    pthread.exit(0);


}
