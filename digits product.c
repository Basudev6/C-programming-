// Wap to input a number and find the product of its digits.(458=4*5*8=160)
#include<stdio.h>
void main()
{
	int n,rem,p=1;
	printf("Enter a number:\n");
	scanf("%d",&n);
	while(n!=0)
	{
		rem=n%10;
		p=p*rem;
		n=n/10;
	}
	printf("product is %d",p);
}
