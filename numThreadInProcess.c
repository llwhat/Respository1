#include <stdio.h>
#include <pthread.h>

typedef struct thread_info
{
  pthread_t pid;
  int num;
}THREAD_INFO;

void* thread_func(void* arg)
{
  while(1);
}

int main()
{

  i=0,s=0;
  while(1)
  {
    THREAD_INFO tinfo;
    tinfo.num=i++;
    s=pthread_create(&tinfo.tid,0,thread_fucn,0);
    if(s!=0){
    printf("fail create num %d,quit!\n", tinfo.tid);
    exit(1);
  }
  else{
    printf("tid=%d\t\tnum=%d\n",tinfo.tid,tinfo.num);
  }
    
  return 0;
}
