#include <stdio.h>
#define DAYS_PER_YEAR 365

int main() {
   int age,days;
   age = 31;
   days = age * DAYS_PER_YEAR;
   printf("You age is %d, and It is %d days. \n",age,days);

   return 0;
}