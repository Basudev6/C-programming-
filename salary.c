// Wap to read salary of 5  employees and count the number of emplyee getting salary from 5000 to 10000.
#include<stdio.h>
void main()
{
	int i,a[5],count=0;
	printf("Enter salary:");
	for(i=0;i<5;i++)
	 scanf("%d",&a[i]);
	for(i=0;i<5;i++)
	 if(a[i]<=10000&&a[i]>=5000)
	  count++;
	printf("Total number of employee getting salary from 5000 to 10000 is %d",count); 	
}

