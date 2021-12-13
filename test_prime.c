// finding prime or not using function.
#include<stdio.h>
int is_prime(int);
int main()
{
	int a; 
	printf("Enter a number:");
	scanf("%d",&a);
	if(is_prime(a));
	 printf("prime number.");
    else
	 print("not prime number.") ;
	return 0;
}
int is_prime(int n)
{
	int count,i;
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		  count++;
	}
	if(count==2)
	 return 0;
	else
	 return 1 ;
 } 
	
}
