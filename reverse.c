// Wap to input a number and find the reverse.(458=548)
#include<stdio.h>
void main()
{
	int n,rem,rev=0;
	printf("Enter a number:\n");
	scanf("%d",&n);
	while(n!=0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;	
	}
	printf("reverse is %d",rev);
}
