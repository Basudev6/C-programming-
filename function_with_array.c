// Wap to input 5 numbers and calculate their sum using array and function.
#include<stdio.h>
int sum(int a[]);
void main()
{
	int a[5],f,i;
	printf("Enter any 5 numbers:\n");
	for(i=1;i<=5;i++)
		scanf("%d",&a[i]);
	f=sum(a);
	printf("sum is %d",f);
}
int sum(int a[])
{ int c=0,i;
  for(i=1;i<=5;i++)
  	c=c+a[i];
  return(c);
}

