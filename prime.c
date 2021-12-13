// Wap to calculate whether given number is prime or not.
#include<stdio.h>
void main()
{
	int i,n,count=0;
	printf("Enter a number:\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		  count++;
	}
	if(count==2)
	 printf("prime number.\n");
	else
	 printf("Not prime number.\n");
 } 
