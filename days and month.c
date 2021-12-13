// Wap to convert number of days into days and month.
#include<stdio.h>
void main()
{
  int months,days;
  printf("Enter days:\n");
  scanf("%d",&days);
  months=days/30;
  days= days%30;
  printf("months=%d\ndays=%d",months,days);  
  	
}
