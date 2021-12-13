// Wap to input a number and find the sum of square of each even digits.(458=4*4+5*5+8*8=80)
#include<stdio.h>
void main()
{
	int n,rem,sum=0;
	printf("Enter a number:\n");
	scanf("%d",&n);
	while(n!=0)
	{
		rem=n%10;
		if(rem%2==0)
		 sum=sum+rem*rem ;
		n=n/10; 
		
	}
	printf("The sum of square of each even digits is %d\n",sum);
	
}
