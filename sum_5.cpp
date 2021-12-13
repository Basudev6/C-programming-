// Wap to find out sum of all numbers completely divisible by 5 up to n numbers given by the user.
#include<stdio.h>
int main()
{
	int n,sum=0,i;
	printf("Enter n:\n");
	scanf("%d",&n);
	for(i=5;i<=n;i+=5)
	  sum+=i;
	printf("sum of number exactly divisible by 5 upto %d = %d",n,sum);
	return 0;  
}
