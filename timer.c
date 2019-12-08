//header files
//Kendal Hall for signals
#include "timer.h"
#include <stdio.h>
#include <stdlib.h>
//variable dec
int total_alarms = 0;
void increment_alarm() {
  total_alarms += 1;
}
void sigint_handler(int signum)
{
  printf("\nTotal alarms occured in the code: %d\n", total_alarms);
  printf("Hence, the program was executed for however seconds %d seconds.\n", total_alarms);
  exit(0);
}