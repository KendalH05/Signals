/* hello_signal.c */
#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>
#include "timer.h"
void handler(int signum)
{ //signal handler
  printf("Hey Class!\n");
  increment_alarm();
}

  
int main(int argc, char * argv[])
{
  signal(SIGINT,sigint_handler); 
  signal(SIGALRM,handler); 
  while(1)
  {
    alarm(1);
    
    //to schedule sig for basically 1 second
    sleep(1);
    
    printf("I finished this Lab\n");
    
  }
  
  return 0;
  
  //basically the end of the program was never reached at this right  
  
  
  
}