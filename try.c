#include<stdio.h>
void main()
{
	int i,n,sum=0,j=0;
	printf("Enter a number:\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		sum=sum+i;
		j=j+2;
	}
	printf("The sum of even number upto %d term is %d",n,sum);	
	
}
