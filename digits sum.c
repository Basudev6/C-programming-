// Wap to input a number and find the sum of its digits.
#include<stdio.h>
void main()
{
	int n,rem,sum=0;
	printf("Enter a number:\n");
	scanf("%d",&n);
	while(n!=0)
	{
		rem=n%10;
		sum=sum+rem;
		n=n/10;
	}
	printf("sum is %d",sum);
}
