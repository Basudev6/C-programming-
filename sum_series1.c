// Wap to calculate sum of the following series up to n terms.
// sum=x-x^2+x^3-x^4+..... 
#include<stdio.h>
#include<math.h>
void main()
{
	int x,n,sum=0,i;
	printf("Enter values of x and n:\n");
	scanf("%d%d",&x,&n);
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
		sum=sum-pow(x,i);
		else
		sum=sum+pow(x,i);
	}
	printf("sum=%d",sum);
 } 
