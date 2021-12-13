// Wap to calculate factorial using recursive function.
#include<stdio.h>
int fact(int);
void main()
{
	int a,f,n;
	printf("Enter a number:\n");
	scanf("%d",&n);
	f=fact(n);
	printf("factorial of %d is %d",n,f);
}
int fact(int n)
{
	if(n<=1)
	  return(1);
	else
	  return(n*fact(n-1));  
}
