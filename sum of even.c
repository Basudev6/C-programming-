// Wap to display the sum of even number upto n term.
#include<stdio.h>
void main()
{
	int i,n,sum=0;
	printf("Enter a number:\n");
	scanf("%d",&n);
	for(i=2;i<=n;i+=2)
		sum=sum+i;
	printf("The sum of even number upto %d term is %d",n,sum);	
	
}
