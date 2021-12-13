// Wap to determine the sum of the harmonic series (1+1/2+1/3+1/4+.....+1/n) for a given value of n.
#include<stdio.h>
void main()
{
	int n,i;
	float sum=0;
	printf("Enter a number:\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	 sum=sum+1.0/i; 
	printf("sum=%.2f",sum);
}
