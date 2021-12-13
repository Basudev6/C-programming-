// Wap to find sum of the series 1+x^2+3x^2+4x^2+....+nx^2.
#include<stdio.h>
void main()
{
	int n,x,i,sum;
	printf("Enter values of x and n:\n");
	scanf("%d%d",&x,&n);
	sum= 1+x*x;
	for(i=3;i<=n;i++)
	 sum=sum+i*x*x;
	printf("sum=%d",sum);
}
