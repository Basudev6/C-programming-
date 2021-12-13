// Wap to calculate sum of the sequence 1/1!+2/2!+3/3!+....+n/n!.
#include<stdio.h>
void main()
{
	int n,i,j,fact;
	float sum=0;
	printf("Enter number:\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fact=1;
		for(j=1;j<=i;j++)
		 fact=fact*j;
		sum=sum+(float)i/fact;
	}
	printf("sum=%.2f",sum);
 } 
